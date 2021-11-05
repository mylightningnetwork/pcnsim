//
// Generated file, do not edit! Created by nedtool 5.7 from routeReq.msg.
//

#ifndef __ROUTEREQ_M_H
#define __ROUTEREQ_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0507
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "messageTypes.h"
// }}

/**
 * Class generated from <tt>routeReq.msg:5</tt> by nedtool.
 * <pre>
 * packet RouteReq
 * {
 *     int src;
 *     int dest;
 *     double transactionValue;
 *     double maxRoutingFee;
 *     int messageType;
 * }
 * </pre>
 */
class RouteReq : public ::omnetpp::cPacket
{
  protected:
    int src;
    int dest;
    double transactionValue;
    double maxRoutingFee;
    int messageType;

  private:
    void copy(const RouteReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RouteReq&);

  public:
    RouteReq(const char *name=nullptr, short kind=0);
    RouteReq(const RouteReq& other);
    virtual ~RouteReq();
    RouteReq& operator=(const RouteReq& other);
    virtual RouteReq *dup() const override {return new RouteReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSrc() const;
    virtual void setSrc(int src);
    virtual int getDest() const;
    virtual void setDest(int dest);
    virtual double getTransactionValue() const;
    virtual void setTransactionValue(double transactionValue);
    virtual double getMaxRoutingFee() const;
    virtual void setMaxRoutingFee(double maxRoutingFee);
    virtual int getMessageType() const;
    virtual void setMessageType(int messageType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RouteReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RouteReq& obj) {obj.parsimUnpack(b);}


#endif // ifndef __ROUTEREQ_M_H

