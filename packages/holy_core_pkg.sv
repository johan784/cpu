package holy_core_pkg;

typedef enum logic [2:0] {
    IDLE,SENDING_WRITE_REQ,
    SENDING_WRITE_DATA,
    WAITING_WRITE_RES,
    SENDING_READ_REQ,
    RECEIVING_READ_DATA

} cache_state_t;

endpackage 