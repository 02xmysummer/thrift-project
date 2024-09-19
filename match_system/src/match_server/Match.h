/**
 * Autogenerated by Thrift Compiler (0.20.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Match_H
#define Match_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "match_system_types.h"

namespace match_service {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class MatchIf {
 public:
  virtual ~MatchIf() {}

  /**
   * user: 添加的用户信息
   * info: 附加信息
   * 在匹配池中添加一个名用户
   * 
   * @param user
   * @param info
   */
  virtual int32_t add_user(const User& user, const std::string& info) = 0;

  /**
   * user: 删除的用户信息
   * info: 附加信息
   * 从匹配池中删除一名用户
   * 
   * @param user
   * @param info
   */
  virtual int32_t remove_user(const User& user, const std::string& info) = 0;
};

class MatchIfFactory {
 public:
  typedef MatchIf Handler;

  virtual ~MatchIfFactory() {}

  virtual MatchIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MatchIf* /* handler */) = 0;
  };

class MatchIfSingletonFactory : virtual public MatchIfFactory {
 public:
  MatchIfSingletonFactory(const ::std::shared_ptr<MatchIf>& iface) : iface_(iface) {}
  virtual ~MatchIfSingletonFactory() {}

  virtual MatchIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(MatchIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<MatchIf> iface_;
};

class MatchNull : virtual public MatchIf {
 public:
  virtual ~MatchNull() {}
  int32_t add_user(const User& /* user */, const std::string& /* info */) override {
    int32_t _return = 0;
    return _return;
  }
  int32_t remove_user(const User& /* user */, const std::string& /* info */) override {
    int32_t _return = 0;
    return _return;
  }
};

typedef struct _Match_add_user_args__isset {
  _Match_add_user_args__isset() : user(false), info(false) {}
  bool user :1;
  bool info :1;
} _Match_add_user_args__isset;

class Match_add_user_args {
 public:

  Match_add_user_args(const Match_add_user_args&);
  Match_add_user_args& operator=(const Match_add_user_args&);
  Match_add_user_args() noexcept
                      : info() {
  }

  virtual ~Match_add_user_args() noexcept;
  User user;
  std::string info;

  _Match_add_user_args__isset __isset;

  void __set_user(const User& val);

  void __set_info(const std::string& val);

  bool operator == (const Match_add_user_args & rhs) const
  {
    if (!(user == rhs.user))
      return false;
    if (!(info == rhs.info))
      return false;
    return true;
  }
  bool operator != (const Match_add_user_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Match_add_user_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Match_add_user_pargs {
 public:


  virtual ~Match_add_user_pargs() noexcept;
  const User* user;
  const std::string* info;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Match_add_user_result__isset {
  _Match_add_user_result__isset() : success(false) {}
  bool success :1;
} _Match_add_user_result__isset;

class Match_add_user_result {
 public:

  Match_add_user_result(const Match_add_user_result&) noexcept;
  Match_add_user_result& operator=(const Match_add_user_result&) noexcept;
  Match_add_user_result() noexcept
                        : success(0) {
  }

  virtual ~Match_add_user_result() noexcept;
  int32_t success;

  _Match_add_user_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Match_add_user_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Match_add_user_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Match_add_user_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Match_add_user_presult__isset {
  _Match_add_user_presult__isset() : success(false) {}
  bool success :1;
} _Match_add_user_presult__isset;

class Match_add_user_presult {
 public:


  virtual ~Match_add_user_presult() noexcept;
  int32_t* success;

  _Match_add_user_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Match_remove_user_args__isset {
  _Match_remove_user_args__isset() : user(false), info(false) {}
  bool user :1;
  bool info :1;
} _Match_remove_user_args__isset;

class Match_remove_user_args {
 public:

  Match_remove_user_args(const Match_remove_user_args&);
  Match_remove_user_args& operator=(const Match_remove_user_args&);
  Match_remove_user_args() noexcept
                         : info() {
  }

  virtual ~Match_remove_user_args() noexcept;
  User user;
  std::string info;

  _Match_remove_user_args__isset __isset;

  void __set_user(const User& val);

  void __set_info(const std::string& val);

  bool operator == (const Match_remove_user_args & rhs) const
  {
    if (!(user == rhs.user))
      return false;
    if (!(info == rhs.info))
      return false;
    return true;
  }
  bool operator != (const Match_remove_user_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Match_remove_user_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Match_remove_user_pargs {
 public:


  virtual ~Match_remove_user_pargs() noexcept;
  const User* user;
  const std::string* info;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Match_remove_user_result__isset {
  _Match_remove_user_result__isset() : success(false) {}
  bool success :1;
} _Match_remove_user_result__isset;

class Match_remove_user_result {
 public:

  Match_remove_user_result(const Match_remove_user_result&) noexcept;
  Match_remove_user_result& operator=(const Match_remove_user_result&) noexcept;
  Match_remove_user_result() noexcept
                           : success(0) {
  }

  virtual ~Match_remove_user_result() noexcept;
  int32_t success;

  _Match_remove_user_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Match_remove_user_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Match_remove_user_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Match_remove_user_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Match_remove_user_presult__isset {
  _Match_remove_user_presult__isset() : success(false) {}
  bool success :1;
} _Match_remove_user_presult__isset;

class Match_remove_user_presult {
 public:


  virtual ~Match_remove_user_presult() noexcept;
  int32_t* success;

  _Match_remove_user_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MatchClient : virtual public MatchIf {
 public:
  MatchClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  MatchClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  /**
   * user: 添加的用户信息
   * info: 附加信息
   * 在匹配池中添加一个名用户
   * 
   * @param user
   * @param info
   */
  int32_t add_user(const User& user, const std::string& info) override;
  void send_add_user(const User& user, const std::string& info);
  int32_t recv_add_user();
  /**
   * user: 删除的用户信息
   * info: 附加信息
   * 从匹配池中删除一名用户
   * 
   * @param user
   * @param info
   */
  int32_t remove_user(const User& user, const std::string& info) override;
  void send_remove_user(const User& user, const std::string& info);
  int32_t recv_remove_user();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MatchProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<MatchIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (MatchProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_add_user(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_remove_user(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MatchProcessor(::std::shared_ptr<MatchIf> iface) :
    iface_(iface) {
    processMap_["add_user"] = &MatchProcessor::process_add_user;
    processMap_["remove_user"] = &MatchProcessor::process_remove_user;
  }

  virtual ~MatchProcessor() {}
};

class MatchProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MatchProcessorFactory(const ::std::shared_ptr< MatchIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< MatchIfFactory > handlerFactory_;
};

class MatchMultiface : virtual public MatchIf {
 public:
  MatchMultiface(std::vector<std::shared_ptr<MatchIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MatchMultiface() {}
 protected:
  std::vector<std::shared_ptr<MatchIf> > ifaces_;
  MatchMultiface() {}
  void add(::std::shared_ptr<MatchIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  /**
   * user: 添加的用户信息
   * info: 附加信息
   * 在匹配池中添加一个名用户
   * 
   * @param user
   * @param info
   */
  int32_t add_user(const User& user, const std::string& info) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add_user(user, info);
    }
    return ifaces_[i]->add_user(user, info);
  }

  /**
   * user: 删除的用户信息
   * info: 附加信息
   * 从匹配池中删除一名用户
   * 
   * @param user
   * @param info
   */
  int32_t remove_user(const User& user, const std::string& info) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->remove_user(user, info);
    }
    return ifaces_[i]->remove_user(user, info);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class MatchConcurrentClient : virtual public MatchIf {
 public:
  MatchConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  MatchConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  /**
   * user: 添加的用户信息
   * info: 附加信息
   * 在匹配池中添加一个名用户
   * 
   * @param user
   * @param info
   */
  int32_t add_user(const User& user, const std::string& info) override;
  int32_t send_add_user(const User& user, const std::string& info);
  int32_t recv_add_user(const int32_t seqid);
  /**
   * user: 删除的用户信息
   * info: 附加信息
   * 从匹配池中删除一名用户
   * 
   * @param user
   * @param info
   */
  int32_t remove_user(const User& user, const std::string& info) override;
  int32_t send_remove_user(const User& user, const std::string& info);
  int32_t recv_remove_user(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
