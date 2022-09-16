/*
Copyright 2015-2019. Vinari Software.
All rights reserved.

Redistribution and use in source and binary forms, source code with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by Vinari Software.
4. Neither the name of the Vinari Software nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY VINARI SOFTWARE "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL VINARI SOFTWARE BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


VINARI SOFTWARE 2015-2019
*/


#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main(){

    ofstream log;
    SYSTEMTIME ahora;
    GetLocalTime(&ahora);

    log.open("LOG-RedSkyRuby.txt", ios::app);

    log<<"RedSky Ruby closed at: "<<ahora.wDay<<"/"<<ahora.wMonth<<"/"<<ahora.wYear<<" a las  "<<ahora.wHour<<":"<<ahora.wMinute<<":"<<ahora.wSecond<<endl;
    log<<"Temporary files removed at: "<<ahora.wDay<<"/"<<ahora.wMonth<<"/"<<ahora.wYear<<" a las  "<<ahora.wHour<<":"<<ahora.wMinute<<":"<<ahora.wSecond<<endl;

    log.close();
    return 0;
}

//Programado por Xavier Vintimilla Jaramillo.
