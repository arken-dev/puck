// Copyright 2016 The Arken Platform Authors.
// All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <arken/base>
#include <arken/mvm.h>
#include <arken/net/httpserver.h>

using arken::mvm;
using arken::net::HttpServer;

int main(int argc, char * argv[])
{

   mvm::init(argc, argv);

   auto server = new HttpServer("127.0.0.1", 2345);
   server->setThreads(25);
   server->setPid("tmp/pid/server.pid");
   server->setDispatcher("lib.dispatcher");
   //server->addService("app/services");
   server->start();

   return 0;
}
