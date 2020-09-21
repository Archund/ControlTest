#include <stdio.h>
#include <stdlib.h>

#include <borealis.hpp>
#include <string>

int main(int argc, char* argv[]) {
    // Init the app
    brls::Logger::setLogLevel(brls::LogLevel::DEBUG);

    if (!brls::Application::init("Control Test")) {
        brls::Logger::error("Unable to init Borealis application");
        return EXIT_FAILURE;
    }

    // Create main view
    brls::AppletFrame* rootFrame = new brls::AppletFrame(false, false);
    rootFrame->setTitle("Control Test");
    rootFrame->setIcon(BOREALIS_ASSET("icon/control_test.jpg"));

    // Add the root view to the stack
    brls::Application::pushView(rootFrame);

    // Run the app
    while (brls::Application::mainLoop())
        ;

    // Exit
    return EXIT_SUCCESS;
}
