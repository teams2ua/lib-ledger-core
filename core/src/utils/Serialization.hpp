#pragma once

#include <vector>
#include <sstream>
#include <cereal/cereal.hpp>
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
    }
}