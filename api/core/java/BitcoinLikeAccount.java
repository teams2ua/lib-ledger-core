// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

package co.ledger.core;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/**Class representing a Bitcoin account */
public abstract class BitcoinLikeAccount {
    /**
     *Get UTXOs of account in a given range
     *@param from, integer, lower bound for account's UTXO's index
     *@param to, integer, upper bound for account's UTXO's index
     *@param callback, ListCallback object which returns a list of BitcoinLikeOutput if getUTXO succeed
     */
    public abstract void getUTXO(int from, int to, BitcoinLikeOutputListCallback callback);

    /**
     *Get UTXOs count of account
     *@param callback, Callback object which returns number of UTXO owned by this account
     */
    public abstract void getUTXOCount(I32Callback callback);

    /**
     *Get UTXOs meeting certain requirements to form a transaction request object
     *@param baseFees, Amount object, amount of base fees that the transaction will cost
     *@param outputs, List of BitcoinLikeOutput objects, outputs from which we will pick to construct the transaction
     *@param strategy, BitcoinLikePickingStrategy object, determine strategy followed to pick outputs to spend
     *@param callback, Callback object which returns the constructed transaction (BitcoinLikeTransactionRequest object)
     */
    public abstract void pickUTXO(Amount baseFees, ArrayList<BitcoinLikeOutput> outputs, BitcoinLikePickingStrategy strategy, BitcoinLikeTransactionRequestCallback callback);

    /**
     *Get an estimation of fees given a transaction
     *@param request, BitcoinLikeTransactionRequest object, request without totalFees set
     *@param callback, Callback returning BitcoinLikeTransactionRequest object with totalFees set if estimateFees succeed
     */
    public abstract void estimateFees(BitcoinLikeTransactionRequest request, BitcoinLikeTransactionRequestCallback callback);

    /**
     *Prepare a raw transaction to be used by user
     *@param request, BitcoinLikeTransactionRequest object, raw transaction object
     *@param callback, Callback object returning, is case of success of prepareTransaction, a BitcoinLikePreparedTransaction object which is an usable transaction
     */
    public abstract void prepareTransaction(BitcoinLikeTransactionRequest request, BitcoinLikePreparedTransactionCallback callback);

    /**
     *Broadcast transaction to Bitcoin network (to nodes)
     *@param transaction, serialized transaction to broadcast
     *@param callback, Callback object which returning a string result
     */
    public abstract void broadcastTransaction(byte[] transaction, StringCallback callback);

    private static final class CppProxy extends BitcoinLikeAccount
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
        public void getUTXO(int from, int to, BitcoinLikeOutputListCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getUTXO(this.nativeRef, from, to, callback);
        }
        private native void native_getUTXO(long _nativeRef, int from, int to, BitcoinLikeOutputListCallback callback);

        @Override
        public void getUTXOCount(I32Callback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getUTXOCount(this.nativeRef, callback);
        }
        private native void native_getUTXOCount(long _nativeRef, I32Callback callback);

        @Override
        public void pickUTXO(Amount baseFees, ArrayList<BitcoinLikeOutput> outputs, BitcoinLikePickingStrategy strategy, BitcoinLikeTransactionRequestCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_pickUTXO(this.nativeRef, baseFees, outputs, strategy, callback);
        }
        private native void native_pickUTXO(long _nativeRef, Amount baseFees, ArrayList<BitcoinLikeOutput> outputs, BitcoinLikePickingStrategy strategy, BitcoinLikeTransactionRequestCallback callback);

        @Override
        public void estimateFees(BitcoinLikeTransactionRequest request, BitcoinLikeTransactionRequestCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_estimateFees(this.nativeRef, request, callback);
        }
        private native void native_estimateFees(long _nativeRef, BitcoinLikeTransactionRequest request, BitcoinLikeTransactionRequestCallback callback);

        @Override
        public void prepareTransaction(BitcoinLikeTransactionRequest request, BitcoinLikePreparedTransactionCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_prepareTransaction(this.nativeRef, request, callback);
        }
        private native void native_prepareTransaction(long _nativeRef, BitcoinLikeTransactionRequest request, BitcoinLikePreparedTransactionCallback callback);

        @Override
        public void broadcastTransaction(byte[] transaction, StringCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_broadcastTransaction(this.nativeRef, transaction, callback);
        }
        private native void native_broadcastTransaction(long _nativeRef, byte[] transaction, StringCallback callback);
    }
}