# Linux Commands Cheat Sheet (50 Important Commands)

## Navigation

```bash
pwd
ls
ls -la
cd /path
tree
```

## File Operations

```bash
touch file.txt
cp file1 file2
mv file1 file2
rm file.txt
rm -rf directory
```

## Directory Operations

```bash
mkdir test
mkdir -p app/logs
rmdir test
```

## File Viewing

```bash
cat file.txt
less file.txt
head file.txt
tail file.txt
tail -f app.log
```

## Search Commands

```bash
find / -name "*.log"
grep "error" app.log
grep -r "docker" .
which python
whereis nginx
```

## Permissions

```bash
chmod 755 file.sh
chmod +x script.sh
chown user:user file.txt
```

## Process Management

```bash
ps
ps aux
top
htop
kill PID
kill -9 PID
pkill nginx
```

## User Management

```bash
whoami
id
useradd devops
passwd username
su username
```

## Disk Commands

```bash
df -h
du -sh folder
lsblk
mount
```

## Networking

```bash
ip a
ping google.com
netstat -tulpn
ss -tulpn
curl google.com
```

## Service Management

```bash
systemctl status nginx
systemctl start nginx
systemctl stop nginx
systemctl restart nginx
systemctl enable nginx
```

## Archives

```bash
tar -cvf backup.tar folder
tar -xvf backup.tar
zip -r app.zip folder
unzip app.zip
```

## SSH

```bash
ssh user@host
scp file.txt user@host:/tmp
```

## Monitoring

```bash
free -m
uptime
vmstat
iostat
journalctl -xe
```

## Top 10 Interview Commands

```bash
ls -la
pwd
grep
find
ps aux
top
df -h
chmod
chown
systemctl status
```
