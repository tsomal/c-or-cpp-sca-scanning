# Vendored dependency inventory

This repository intentionally includes out-of-date third-party libraries and a
scanner-friendly inventory for SCA practice.

## Included dependency trees

| Library | Version | Notes |
| --- | --- | --- |
| zlib | 1.2.11 | Legacy compression library version with known historical CVEs |
| libpng | 1.6.37 | Legacy PNG library with historical vulnerability reports |
| OpenSSL | 1.0.2u | Older TLS library version that predates many security fixes |

These directories are meant for security training, not production use.
