#pragma once

#include <memory>

#include "core.h"
#include <spdlog/spdlog.h>

namespace RedPanda {
  class REDPANDA_API Log  {
    private:
      static std::shared_ptr<spdlog::logger> s_CoreLogger;
      static std::shared_ptr<spdlog::logger> s_ClientLogger;

    public:
      static void init();
      inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; };
      inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; };
  };
}

#define RP_CORE_ERROR(...) ::RedPanda::Log::getCoreLogger()->error(__VA_ARGS__)
#define RP_CORE_WARN(...) ::RedPanda::Log::getCoreLogger()->warn(__VA_ARGS__)
#define RP_CORE_INFO(...) ::RedPanda::Log::getCoreLogger()->info(__VA_ARGS__)
#define RP_CORE_TRACE(...) ::RedPanda::Log::getCoreLogger()->trace(__VA_ARGS__)

#define RP_ERROR(...) ::RedPanda::Log::getClientLogger()->error(__VA_ARGS__)
#define RP_WARN(...) ::RedPanda::Log::getClientLogger()->warn(__VA_ARGS__)
#define RP_INFO(...) ::RedPanda::Log::getClientLogger()->info(__VA_ARGS__)
#define RP_TRACE(...) ::RedPanda::Log::getClientLogger()->trace(__VA_ARGS__)