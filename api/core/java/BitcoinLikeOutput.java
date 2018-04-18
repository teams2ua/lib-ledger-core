// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

/**Class representing Bitcoin outputs */
public abstract class BitcoinLikeOutput {
    /**
     *Get transaction hash in which output was 'created'
     *@return String, transaction hash containing output
     */
    public abstract String getTransactionHash();

    /**
     *Get index of output in list of all outputs contained in same transaction
     *@return 32 bits integer, index of output
     */
    public abstract int getOutputIndex();

    /**
     *Get amount of output
     *@return Amount object, amount of output
     */
    public abstract Amount getValue();

    /**
     *Get script (witness script) cryptographic puzzle that determines the conditions to spend the output
     *@return in Bytes (variable size depending on type of script P2PKH, P2SH), locking script to spend UTXO
     */
    public abstract byte[] getScript();

    /**
     *Get address that spent the output
     *@return Optional String, address that spent
     */
    public abstract String getAddress();

    private static final class CppProxy extends BitcoinLikeOutput
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getTransactionHash()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTransactionHash(this.nativeRef);
        }
        private native String native_getTransactionHash(long _nativeRef);

        @Override
        public int getOutputIndex()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getOutputIndex(this.nativeRef);
        }
        private native int native_getOutputIndex(long _nativeRef);

        @Override
        public Amount getValue()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getValue(this.nativeRef);
        }
        private native Amount native_getValue(long _nativeRef);

        @Override
        public byte[] getScript()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getScript(this.nativeRef);
        }
        private native byte[] native_getScript(long _nativeRef);

        @Override
        public String getAddress()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAddress(this.nativeRef);
        }
        private native String native_getAddress(long _nativeRef);
    }
}