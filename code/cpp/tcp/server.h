
namespace challen {
namespace net {
class Socket {
    public:
      Socket();
      ~Socket();
      
      void start(char *addr, int port);
    private:
      int s_fd;
  };
}
}
