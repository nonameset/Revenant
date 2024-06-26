#ifndef REVENANT_LOGGER_H
#define REVENANT_LOGGER_H

namespace revenant
{
    class Logger
    {
    public:
        explicit Logger();
        ~Logger() noexcept;

        Logger(Logger const&) = delete;
        Logger(Logger&&) = delete;
        Logger& operator=(Logger const&) = delete;
        Logger& operator=(Logger&&) = delete;

        void Info(const char* format, ...);
        void Error(const char* format, ...);
        void Log(const char* type, const char* format, std::va_list args);

        std::mutex& GetMutex();
        std::pair<std::unique_ptr<char[]>*, std::size_t> GetMessages();
        std::istream& GetInput();

    private:
        std::mutex m_Mutex;
        std::vector<std::unique_ptr<char[]>> m_Messages;

        fs::path m_FilePath;
        std::ofstream m_File;
        std::ofstream m_Console;
        std::ifstream m_Input;
    };

    inline std::unique_ptr<Logger> g_Logger;
}

#endif //REVENANT_LOGGER_H