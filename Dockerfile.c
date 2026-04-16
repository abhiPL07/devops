FROM ubuntu:22.04

RUN apt update && apt install -y nano build-essential

RUN mkdir /cprog_ama

WORKDIR /cprog_ama

ENTRYPOINT [ "" ]

CMD [ "/bin/bash" ]