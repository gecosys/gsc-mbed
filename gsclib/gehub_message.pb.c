/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 at Mon Sep  2 20:25:28 2019. */

#include "gehub_message.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t gschub_Ticket_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, STATIC  , FIRST, gschub_Ticket, connID, connID, 0),
    PB_FIELD(  2, STRING  , SINGULAR, STATIC  , OTHER, gschub_Ticket, token, connID, 0),
    PB_LAST_FIELD
};

const pb_field_t gschub_Letter_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, gschub_Letter, type, type, 0),
    PB_FIELD(  2, STRING  , SINGULAR, STATIC  , OTHER, gschub_Letter, receiver, type, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, gschub_Letter, data, receiver, 0),
    PB_LAST_FIELD
};

const pb_field_t gschub_Reply_fields[5] = {
    PB_FIELD(  1, STRING  , SINGULAR, STATIC  , FIRST, gschub_Reply, sender, sender, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, STATIC  , OTHER, gschub_Reply, HMAC, sender, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, gschub_Reply, data, HMAC, 0),
    PB_FIELD(  4, INT32   , SINGULAR, STATIC  , OTHER, gschub_Reply, timestamp, data, 0),
    PB_LAST_FIELD
};



/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for gschub_Ticket.token is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */
