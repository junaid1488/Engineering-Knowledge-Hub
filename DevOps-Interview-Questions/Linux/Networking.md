# Linux Networking Interview Questions

## 1. What is an IP Address?

Unique address assigned to a device on a network.

---

## 2. Difference Between Public and Private IP?

Public IP → Internet accessible

Private IP → Internal network use

---

## 3. What is DNS?

Domain Name System converts domain names into IP addresses.

---

## 4. What is a Port?

Logical communication endpoint.

Example:

* 22 → SSH
* 80 → HTTP
* 443 → HTTPS

---

## 5. What is SSH?

Secure protocol for remote server access.

---

## 6. What is Ping?

Tests connectivity between two hosts.

---

## 7. What is Netstat?

Displays network connections and listening ports.

---

## 8. What is ss?

Modern replacement for netstat.

---

## 9. What is a Firewall?

Controls incoming and outgoing network traffic.

---

## 10. What is NAT?

Network Address Translation maps private IPs to public IPs.

---

## 11. What is a Subnet?

Logical division of a network.

---

## 12. What is Routing?

Process of forwarding packets between networks.

---

## 13. Difference Between TCP and UDP?

| TCP                 | UDP            |
| ------------------- | -------------- |
| Reliable            | Faster         |
| Connection Oriented | Connectionless |

---

## 14. How to Check Open Ports?

```bash
ss -tulpn
```

---

## 15. Most Asked Question

### How do you troubleshoot a network issue?

1. Check IP
2. Ping host
3. Verify DNS
4. Check routes
5. Verify firewall
6. Check ports
