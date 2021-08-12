#ifndef CLOCK_PUBLISHER_H
#define CLOCK_PUBLISHER_H

#include "avt_341/node/node_proxy.h"
#include "rosgraph_msgs/Clock.h"

namespace avt_341 {
    namespace node {

        class ClockPublisher{
            public:
                static std::shared_ptr<ClockPublisher> make_shared(const std::string & topic_name, int qos, std::shared_ptr<NodeProxy> node);
                ClockPublisher(const std::string topic_name, int qos, std::shared_ptr<NodeProxy> node);
                void publish(double elapsed_time);
            private:
                std::shared_ptr<avt_341::node::Publisher<rosgraph_msgs::Clock>> pub_;
        };

    }
}
#endif //CLOCK_PUBLISHER_H
