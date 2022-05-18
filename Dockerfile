FROM ubuntu:20.04
ENV TZ=Asia/Tokyo \
    DEBIAN_FRONTEND=noninteractive
WORKDIR '/work'
RUN apt-get update -y && apt-get install -y build-essential \
    tcl \
    g++ \
    python3-pip \
    redis-server \
    unzip \
    zip \
    screen \
    openjdk-8-jdk

CMD ["/bin/bash"]