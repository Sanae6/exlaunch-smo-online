/**
 * @file auth.h
 * @brief Authorization for DDL.
 */

#pragma once

#include "ddl.h"
#include "smootypes.h"

namespace nn
{
    namespace nex
    {   
        class NintendoAuthenticationDDLDeclarations : public nn::nex::DDLDeclarations
        {
        public:
            virtual ~NintendoAuthenticationDDLDeclarations();
            virtual void Init();

            void Register();
            
        };
    };
};