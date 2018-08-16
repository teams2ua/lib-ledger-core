// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

package co.ledger.core;

/**Class representing a lock, for thread safety purposes */
public abstract class Lock {
    /**
     *Acquire lock by thread calling this method,
     *If Lock already acquired by another thread, execution of calling thread should be blocked
     *until the other thread call the unlock method
     */
    public abstract void lock();

    /**
     *Try to acquire lock
     *If Lock already aquired by another thread, method returns false for calling thread
     *without blocking its execution
     *@return bool, return true if Lock acquire by calling thread, false otherwise
     */
    public abstract boolean tryLock();

    /**Release Lock ownership by calling thread */
    public abstract void unlock();
}
