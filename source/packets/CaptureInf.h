#pragma once

#include "Packet.h"

struct CaptureInf : Packet {
    CaptureInf() : Packet() {
        this->mType = PacketType::CAPTUREINF;
        mPacketSize = sizeof(CaptureInf) - sizeof(Packet);
    };

    char hackName[0x20] = {};
    
};