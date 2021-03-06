/* 
 * File:   ConsoleOutput.h
 * Author: doe300
 *
 * Created on April 25, 2016, 4:43 PM
 */

#ifndef CONSOLEOUTPUT_H
#define CONSOLEOUTPUT_H

#include "Output.h"
#include "TextOutput.h"

namespace Test
{

    class ConsoleOutput : public TextOutput
    {
    public:
        ConsoleOutput(const unsigned int mode);
        virtual ~ConsoleOutput();
        
        virtual void finishSuite(const std::string& suiteName, const unsigned int numTests, const unsigned int numPositiveTests, const std::chrono::microseconds totalDuration) override;

        virtual void finishTestMethod(const std::string& suiteName, const std::string& methodName, const std::string& argString, const bool withSuccess) override;

        virtual void printSuccess(const Assertion& assertion) override;
        virtual void printFailure(const Assertion& assertion) override;
        virtual void printException(const std::string& suiteName, const std::string& methodName, const std::string& argString, const std::exception& ex) override;
    private:
        static const std::string errorColor;
        static const std::string successColor;
        static const std::string resetColors;
    };

}
#endif /* CONSOLEOUTPUT_H */

