# 🌐 CDN (Content Delivery Network)

## 📖 Theory

A CDN is a geographically distributed network of servers that delivers content from the nearest location to users.

Purpose:

* Faster Loading
* Reduced Latency
* Reduced Server Load
* Better User Experience

---

## 🏗 Architecture Diagram

```text
          User (India)
                │
                ▼

        CDN Edge Server
           (Mumbai)

                │

        Cache Hit? ✓
                │
                ▼

           Response


        Cache Miss? ✗
                │
                ▼

         Origin Server
```

---

## 💡 Interview Questions

### What is a CDN?

A distributed network that serves content closer to users.

### Why Use CDN?

* Faster Performance
* Reduced Latency
* Lower Origin Load

### Popular CDNs?

* Cloudflare
* Akamai
* AWS CloudFront

---

## ⚡ Real-world Example

Netflix serves videos through CDN edge locations worldwide.

---

## 💻 Small Code Example

```html
<img src="https://cdn.example.com/logo.png">
```

Instead of:

```html
<img src="https://myserver.com/logo.png">
```

---

## 📈 Advantages

* Faster Content Delivery
* Improved Scalability
* Better Availability

---

## ❌ Disadvantages

* Additional Cost
* Cache Invalidation Complexity

---

## 📝 Placement Quick Revision

```text
Purpose:
✔ Faster Content Delivery

Popular CDNs:
✔ Cloudflare
✔ CloudFront
✔ Akamai

Benefits:
✔ Low Latency
✔ Better UX
✔ Scalability
```
