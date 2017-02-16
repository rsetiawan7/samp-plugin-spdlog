/** 
 *  SA-MP Log Functions
 *
 *  (c) Copyright 20017-2018, ProMetheus
 */

enum SPDLOG_LEVEL
{
	TRACE = 0,
	DEBUG = 1,
	INFO = 2,
	WARN = 3,
	ERROR = 4,
	CRITICAL = 5,
	OFF = 6
};

/**
 * ConsoleLogger
 * - Warning: Not using the logprintf sink (not logged to server_log.txt)
 * @param string name
 * @param string path
 */
native ConsoleLogger(const name[]);

/**
 * BasicLogger
 * @param string name
 * @param string path
 */
native BasicLogger(const name[], const path[]);

/**
 * RotatingLogger
 * @param string name
 * @param string path
 * @param int seconds
 * @param int file count
 */
native RotatingLogger(const name[], const path[], time, files);

/**
 * DailyLogger
 * @param string name
 * @param string path
 * @param int seconds
 * @param int minute
 */
native DailyLogger(const name[], const path[], hour, minute);

/**
 * SysLogger
 * - Needs the plugin compiled with SPDLOG_ENABLE_SYSLOG
 * @param string name
 * @param string path
 * @param int pid
 */
native SysLogger(const name[], const path[], pid);

/**
 * LoggerSetAsyncMode
 * Set asynchronus mode for sink flush
 * @param size_t size
 */
native LoggerSetAsyncMode(bytes);

/**
 * LoggerSetPattern
 * Set timestamp pattern | spdlog::set_pattern
 * @param string name
 * - As example *** [%H:%M:%S %z] [thread %t] %v ***
 */
native LoggerSetPattern(const pattern[]);

/**
 * LoggerSetLevel
 * Set log level
 * @param SPDLOG_LEVEL loglevel
 */
native LoggerSetLevel(SPDLOG_LEVEL:level);

/**
 * LogInfo
 * @param string path
 * @param string message
 * @param ...
 */
native LogInfo(const name[], const message[], {Float,_}:...);

/**
 * LogWarn
 * @param string path
 * @param string message
 * @param ...
 */
native LogWarn(const name[], const message[], {Float,_}:...);

/**
 * LogCritical
 * @param string path
 * @param string message
 * @param ...
 */
native LogCritical(const name[], const message[], {Float,_}:...);

/**
 * LogDebug
 * @param string path
 * @param string message
 * @param ...
 */
native LogDebug(const name[], const message[], {Float,_}:...);

/**
 * LogTrace
 * @param string path
 * @param string message
 * @param ...
 */
native LogTrace(const name[], const message[], {Float,_}:...);

/**
 * LogError
 * @param string path
 * @param string message
 * @param ...
 */
native LogError(const name[], const message[], {Float,_}:...);

/**
 * DropAllLogger
 * - Drop all logger | spdlog::drop_all();
 */
native DropAllLogger(const name[]);
