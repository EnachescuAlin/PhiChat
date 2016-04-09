/**
 * @file Errors.h
 * @brief In this file are defined the errors.
 */

#ifndef PhiChat_ERRORS
#define PhiChat_ERRORS

enum PhiChatErrors
{
    NO_ERROR                    =  0,
    POINTER_NULL                = -1,
    CLIENT_NULL                 = -2,
    NAME_NULL                   = -3,
    NAME_TOO_LONG               = -4,
    INVALID_ID                  = -5,
    CLIENT_ALREADY_LOGGED       = -6,
    CLIENT_NOT_LOGGED           = -7
};

#endif

