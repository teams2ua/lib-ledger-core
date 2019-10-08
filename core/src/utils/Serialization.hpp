#pragma once

#include <vector>
#include <sstream>
#include "utils/Option.hpp"
#include <cereal/cereal.hpp>
#include <cereal/types/map.hpp>
#include <cereal/types/set.hpp>
#include <cereal/archives/portable_binary.hpp>

namespace ledger {
    namespace core {
        template <typename T>
        Option<T> getObject(const std::vector<uint8_t>& data) {
            if (data.size() == 0) {
                return Option<T>();
            }
            T object;
            std::stringstream stream(std::string(data.begin(), data.end()), std::stringstream::in | std::stringstream::binary);
            ::cereal::PortableBinaryInputArchive archive(stream);
            archive(object);
            return Option<T>(object);
        };

        template<typename T>
        std::vector<uint8_t> putObject(const T& obj) {
            std::stringstream is;
            ::cereal::PortableBinaryOutputArchive archive(is);
            archive(obj);
            auto savedState = is.str();
            return std::vector<uint8_t>((const uint8_t*)savedState.data(), (const uint8_t*)savedState.data() + savedState.length());
        }
    }
}