//
// Generated file, do not edit! Created by nedtool 5.7 from updateFulfillHTLC.msg.
//

#ifndef __UPDATEFULFILLHTLC_M_H
#define __UPDATEFULFILLHTLC_M_H

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
    #include <string>
    #include "messages.h"
// }}

/**
 * Class generated from <tt>updateFulfillHTLC.msg:8</tt> by nedtool.
 * <pre>
 * packet update_fulfill_htlc
 * {
 *     string paymentHash;
 *     string preImage;
 * }
 * </pre>
 */
class update_fulfill_htlc : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string paymentHash;
    ::omnetpp::opp_string preImage;

  private:
    void copy(const update_fulfill_htlc& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const update_fulfill_htlc&);

  public:
    update_fulfill_htlc(const char *name=nullptr, short kind=0);
    update_fulfill_htlc(const update_fulfill_htlc& other);
    virtual ~update_fulfill_htlc();
    update_fulfill_htlc& operator=(const update_fulfill_htlc& other);
    virtual update_fulfill_htlc *dup() const override {return new update_fulfill_htlc(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getPaymentHash() const;
    virtual void setPaymentHash(const char * paymentHash);
    virtual const char * getPreImage() const;
    virtual void setPreImage(const char * preImage);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const update_fulfill_htlc& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, update_fulfill_htlc& obj) {obj.parsimUnpack(b);}


#endif // ifndef __UPDATEFULFILLHTLC_M_H

