//#include <clienttest.h>
//#include <mainwindow.h>

//using boost::bind;
//using libtorrent::total_milliseconds;

//void sleep_ms(int milliseconds)
//{
//#if defined TORRENT_WINDOWS || defined TORRENT_CYGWIN
//    Sleep(milliseconds);
//#elif defined TORRENT_BEOS
//    snooze_until(system_time() + boost::int64_t(milliseconds) * 1000, B_SYSTEM_TIMEBASE);
//#else
//    usleep(milliseconds * 1000);
//#endif
//}


//bool print_trackers = false;
//bool print_peers = false;
//bool print_log = false;
//bool print_downloads = false;
//bool print_matrix = false;
//bool print_file_progress = false;
//bool show_pad_files = false;
//bool show_dht_status = false;
//bool sequential_download = false;

//bool print_ip = true;
//bool print_timers = false;
//bool print_block = false;
//bool print_peer_rate = false;
//bool print_fails = false;
//bool print_send_bufs = true;
//bool print_disk_stats = false;

//// the number of times we've asked to save resume data
//// without having received a response (successful or failure)
//int num_outstanding_resume_data = 0;

//#ifndef TORRENT_DISABLE_DHT
//std::vector<libtorrent::dht_lookup> dht_active_requests;
//std::vector<libtorrent::dht_routing_bucket> dht_routing_table;
//#endif

//torrent_view view;
//session_view ses_view;


//int load_file(std::string const& filename, std::vector<char>& v
//              , libtorrent::error_code& ec, int limit = 8000000)
//{
//    ec.clear();
//    FILE* f = fopen(filename.c_str(), "rb");
//    if (f == NULL)
//    {
//        ec.assign(errno, boost::system::system_category());
//        return -1;
//    }
    
//    int r = fseek(f, 0, SEEK_END);
//    if (r != 0)
//    {
//        ec.assign(errno, boost::system::system_category());
//        fclose(f);
//        return -1;
//    }
//    long s = ftell(f);
//    if (s < 0)
//    {
//        ec.assign(errno, boost::system::system_category());
//        fclose(f);
//        return -1;
//    }
    
//    if (s > limit)
//    {
//        fclose(f);
//        return -2;
//    }
    
//    r = fseek(f, 0, SEEK_SET);
//    if (r != 0)
//    {
//        ec.assign(errno, boost::system::system_category());
//        fclose(f);
//        return -1;
//    }
    
//    v.resize(s);
//    if (s == 0)
//    {
//        fclose(f);
//        return 0;
//    }
    
//    r = fread(&v[0], 1, v.size(), f);
//    if (r < 0)
//    {
//        ec.assign(errno, boost::system::system_category());
//        fclose(f);
//        return -1;
//    }
    
//    fclose(f);
    
//    if (r != s) return -3;
    
//    return 0;
//}

//bool is_absolute_path(std::string const& f)
//{
//    if (f.empty()) return false;
//#if defined(TORRENT_WINDOWS) || defined(TORRENT_OS2)
//    int i = 0;
//    // match the xx:\ or xx:/ form
//    while (f[i] && strchr("abcdefghijklmnopqrstuvxyz", f[i])) ++i;
//    if (i < int(f.size()-1) && f[i] == ':' && (f[i+1] == '\\' || f[i+1] == '/'))
//        return true;
    
//    // match the \\ form
//    if (int(f.size()) >= 2 && f[0] == '\\' && f[1] == '\\')
//        return true;
//    return false;
//#else
//    if (f[0] == '/') return true;
//    return false;
//#endif
//}

//std::string leaf_path(std::string f)
//{
//    if (f.empty()) return "";
//    char const* first = f.c_str();
//    char const* sep = strrchr(first, '/');
//#if defined(TORRENT_WINDOWS) || defined(TORRENT_OS2)
//    char const* altsep = strrchr(first, '\\');
//    if (sep == 0 || altsep > sep) sep = altsep;
//#endif
//    if (sep == 0) return f;
    
//    if (sep - first == int(f.size()) - 1)
//    {
//        // if the last character is a / (or \)
//        // ignore it
//        int len = 0;
//        while (sep > first)
//        {
//            --sep;
//            if (*sep == '/'
//        #if defined(TORRENT_WINDOWS) || defined(TORRENT_OS2)
//                    || *sep == '\\'
//        #endif
//                    )
//                return std::string(sep + 1, len);
//            ++len;
//        }
//        return std::string(first, len);
//    }
//    return std::string(sep + 1);
//}

//std::string path_append(std::string const& lhs, std::string const& rhs)
//{
//    if (lhs.empty() || lhs == ".") return rhs;
//    if (rhs.empty() || rhs == ".") return lhs;
    
//#if defined(TORRENT_WINDOWS) || defined(TORRENT_OS2)
//#define TORRENT_SEPARATOR "\\"
//    bool need_sep = lhs[lhs.size()-1] != '\\' && lhs[lhs.size()-1] != '/';
//#else
//#define TORRENT_SEPARATOR "/"
//    bool need_sep = lhs[lhs.size()-1] != '/';
//#endif
//    return lhs + (need_sep?TORRENT_SEPARATOR:"") + rhs;
//}

//bool is_hex(char const *in, int len)
//{
//    for (char const* end = in + len; in < end; ++in)
//    {
//        if (*in >= '0' && *in <= '9') continue;
//        if (*in >= 'A' && *in <= 'F') continue;
//        if (*in >= 'a' && *in <= 'f') continue;
//        return false;
//    }
//    return true;
//}

//struct torrent_entry
//{
//    torrent_entry(libtorrent::torrent_handle h) : handle(h) {}
//    libtorrent::torrent_handle handle;
//    libtorrent::torrent_status status;
//};

//// maps filenames to torrent_handles
//typedef std::map<std::string, libtorrent::torrent_handle> handles_t;
//typedef std::map<libtorrent::sha1_hash, std::string> files_t;

//files_t hash_to_filename;

//using libtorrent::torrent_status;

//bool yes(libtorrent::torrent_status const&)
//{ return true; }

//FILE* g_log_file = 0;

//int peer_index(libtorrent::tcp::endpoint addr, std::vector<libtorrent::peer_info> const& peers)
//{
//    using namespace libtorrent;
//    std::vector<peer_info>::const_iterator i = std::find_if(peers.begin()
//                                                            , peers.end(), boost::bind(&peer_info::ip, _1) == addr);
//    if (i == peers.end()) return -1;
    
//    return i - peers.begin();
//}

//int listen_port = 6881;
//int allocation_mode = libtorrent::storage_mode_sparse;
//std::string save_path(".");
//int torrent_upload_limit = 0;
//int torrent_download_limit = 0;
//std::string monitor_dir;
//std::string bind_to_interface = "";
//int poll_interval = 5;
//int max_connections_per_torrent = 50;
//bool seed_mode = false;
//int cache_size = 1024;

//bool share_mode = false;
//bool disable_storage = false;

//bool quit = false;

//void signal_handler(int signo)
//{
//    // make the main loop terminate
//    quit = true;
//}

//void load_torrent(libtorrent::sha1_hash const& ih, std::vector<char>& buf, libtorrent::error_code& ec)
//{
//    files_t::iterator i = hash_to_filename.find(ih);
//    if (i == hash_to_filename.end())
//    {
//        // for magnet links and torrents downloaded via
//        // URL, the metadata is saved in the resume file
//        // TODO: pick up metadata from the resume file
//        ec.assign(boost::system::errc::no_such_file_or_directory, boost::system::generic_category());
//        return;
//    }
//    load_file(i->second, buf, ec);
//}

//// if non-empty, a peer that will be added to all torrents
//std::string peer;

//using boost::bind;

//std::string path_to_url(std::string f)
//{
//    std::string ret = "file://"
//        #ifdef TORRENT_WINDOWS
//                      "/"
//        #endif
//            ;
//    static char const hex_chars[] = "0123456789abcdef";
//    static const char unreserved[] =
//            "/-_!.~*()ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
//            "0123456789";
    
//    // make sure the path is an absolute path
//    if (!is_absolute_path(f))
//    {
//        char cwd[TORRENT_MAX_PATH];
//#if defined TORRENT_WINDOWS && !defined TORRENT_MINGW
//        _getcwd(cwd, sizeof(cwd));
//#else
//        getcwd(cwd, sizeof(cwd));
//#endif
//        f = path_append(cwd, f);
//    }
    
//    for (int i = 0; i < int(f.size()); ++i)
//    {
//#ifdef TORRENT_WINDOWS
//        if (f[i] == '\\') ret.push_back('/');
//        else
//#endif
//            if (std::strchr(unreserved, f[i]) != NULL) ret.push_back(f[i]);
//            else
//            {
//                ret.push_back('%');
//                ret.push_back(hex_chars[f[i] >> 4]);
//                ret.push_back(hex_chars[f[i] & 0xf]);
//            }
//    }
//    return ret;
//}

//// monitored_dir is true if this torrent is added because
//// it was found in the directory that is monitored. If it
//// is, it should be remembered so that it can be removed
//// if it's no longer in that directory.
//void add_torrent(libtorrent::session& ses
//                 , handles_t& files
//                 , std::set<libtorrent::torrent_handle>& non_files
//                 , std::string torrent
//                 , int allocation_mode
//                 , std::string const& save_path
//                 , bool monitored_dir
//                 , int torrent_upload_limit
//                 , int torrent_download_limit)
//{
//    using namespace libtorrent;
//    static int counter = 0;
    
//    printf("[%d] %s\n", counter++, torrent.c_str());
    
//    add_torrent_params p;
//    if (seed_mode) p.flags |= add_torrent_params::flag_seed_mode;
//    if (disable_storage) p.storage = disabled_storage_constructor;
//    if (share_mode) p.flags |= add_torrent_params::flag_share_mode;
    
//    std::string filename = path_append(save_path, path_append(".resume"
//                                                              , leaf_path(torrent) + ".resume"));
    
//    error_code ec;
//    load_file(filename, p.resume_data, ec);
    
//    p.url = path_to_url(torrent);
//    p.save_path = save_path;
//    p.storage_mode = (storage_mode_t)allocation_mode;
//    p.flags |= add_torrent_params::flag_paused;
//    p.flags &= ~add_torrent_params::flag_duplicate_is_error;
//    p.flags |= add_torrent_params::flag_auto_managed;
//    p.userdata = (void*)strdup(torrent.c_str());
//    ses.async_add_torrent(p);
//    files.insert(std::pair<const std::string, torrent_handle>(torrent, torrent_handle()));
//}

//std::vector<std::string> list_dir(std::string path
//                                  , bool (*filter_fun)(std::string const&)
//                                  , libtorrent::error_code& ec)
//{
//    std::vector<std::string> ret;
//#ifdef TORRENT_WINDOWS
//    if (!path.empty() && path[path.size()-1] != '\\') path += "\\*";
//    else path += "*";
    
//    WIN32_FIND_DATAA fd;
//    HANDLE handle = FindFirstFileA(path.c_str(), &fd);
//    if (handle == INVALID_HANDLE_VALUE)
//    {
//        ec.assign(GetLastError(), boost::system::system_category());
//        return ret;
//    }
    
//    do
//    {
//        std::string p = fd.cFileName;
//        if (filter_fun(p))
//            ret.push_back(p);
        
//    } while (FindNextFileA(handle, &fd));
//    FindClose(handle);
//#else
    
//    if (!path.empty() && path[path.size()-1] == '/')
//        path.resize(path.size()-1);
    
//    DIR* handle = opendir(path.c_str());
//    if (handle == 0)
//    {
//        ec.assign(errno, boost::system::system_category());
//        return ret;
//    }
    
//    struct dirent de;
//    dirent* dummy;
//    while (readdir_r(handle, &de, &dummy) == 0)
//    {
//        if (dummy == 0) break;
        
//        std::string p = de.d_name;
//        if (filter_fun(p))
//            ret.push_back(p);
//    }
//    closedir(handle);
//#endif
//    return ret;
//}

//bool filter_fun(std::string const& p)
//{
//    for (int i = p.size() - 1; i >= 0; --i)
//    {
//        if (p[i] == '/') break;
//#ifdef TORRENT_WINDOWS
//        if (p[i] == '\\') break;
//#endif
//        if (p[i] != '.') continue;
//        return p.compare(i, 8, ".torrent") == 0;
//    }
//    return false;
//}

//void scan_dir(std::string const& dir_path
//              , libtorrent::session& ses
//              , handles_t& files
//              , std::set<libtorrent::torrent_handle>& non_files
//              , int allocation_mode
//              , std::string const& save_path
//              , int torrent_upload_limit
//              , int torrent_download_limit)
//{
//    std::set<std::string> valid;
    
//    using namespace libtorrent;
    
//    error_code ec;
//    std::vector<std::string> ents = list_dir(dir_path, filter_fun, ec);
//    if (ec)
//    {
//        fprintf(stderr, "failed to list directory: (%s : %d) %s\n"
//                , ec.category().name(), ec.value(), ec.message().c_str());
//        return;
//    }
    
//    for (std::vector<std::string>::iterator i = ents.begin()
//         , end(ents.end()); i != end; ++i)
//    {
//        std::string file = path_append(dir_path, *i);
        
//        handles_t::iterator k = files.find(file);
//        if (k != files.end())
//        {
//            valid.insert(file);
//            continue;
//        }
        
//        // the file has been added to the dir, start
//        // downloading it.
//        add_torrent(ses, files, non_files, file, allocation_mode
//                    , save_path, true, torrent_upload_limit, torrent_download_limit);
//        valid.insert(file);
//    }
    
//    // remove the torrents that are no longer in the directory
    
//    for (handles_t::iterator i = files.begin(); !files.empty() && i != files.end();)
//    {
//        if (i->first.empty() || valid.find(i->first) != valid.end())
//        {
//            ++i;
//            continue;
//        }
        
//        torrent_handle& h = i->second;
//        if (!h.is_valid())
//        {
//            files.erase(i++);
//            continue;
//        }
        
//        h.auto_managed(false);
//        h.pause();
//        // the alert handler for save_resume_data_alert
//        // will save it to disk
//        h.save_resume_data();
//        ++num_outstanding_resume_data;
        
//        files.erase(i++);
//    }
//}


//char const* timestamp()
//{
//    time_t t = std::time(0);
//    tm* timeinfo = std::localtime(&t);
//    static char str[200];
//    std::strftime(str, 200, "%b %d %X", timeinfo);
//    return str;
//}

//void print_alert(libtorrent::alert const* a, std::string& str)
//{
//    using namespace libtorrent;
    
//    if (a->category() & alert::error_notification)
//    {
//        str += esc("31");
//    }
//    else if (a->category() & (alert::peer_notification | alert::storage_notification))
//    {
//        str += esc("33");
//    }
//    str += "[";
//    str += timestamp();
//    str += "] ";
//    str += a->message();
//    str += esc("0");
    
//    if (g_log_file)
//        fprintf(g_log_file, "[%s] %s\n", timestamp(),  a->message().c_str());
//}

//int save_file(std::string const& filename, std::vector<char>& v)
//{
//    FILE* f = fopen(filename.c_str(), "wb");
//    if (f == NULL)
//        return -1;
    
//    int w = fwrite(&v[0], 1, v.size(), f);
//    fclose(f);
    
//    if (w < 0) return -1;
//    if (w != int(v.size())) return -3;
//    return 0;
//}

//// returns true if the alert was handled (and should not be printed to the log)
//// returns false if the alert was not handled
//bool handle_alert(libtorrent::session& ses, libtorrent::alert* a
//                  , handles_t& files, std::set<libtorrent::torrent_handle>& non_files)
//{
//    using namespace libtorrent;
    
//    if (session_stats_alert* s = alert_cast<session_stats_alert>(a))
//    {
//        ses_view.update_counters(s->values, sizeof(s->values)/sizeof(s->values[0])
//                , duration_cast<microseconds>(s->timestamp().time_since_epoch()).count());
//        return true;
//    }
    
//#ifndef TORRENT_DISABLE_DHT
//    if (dht_stats_alert* p = alert_cast<dht_stats_alert>(a))
//    {
//        dht_active_requests = p->active_requests;
//        dht_routing_table = p->routing_table;
//        return true;
//    }
//#endif
    
//#ifdef TORRENT_USE_OPENSSL
//    if (torrent_need_cert_alert* p = alert_cast<torrent_need_cert_alert>(a))
//    {
//        torrent_handle h = p->handle;
//        std::string base_name = path_append("certificates", to_hex(h.info_hash().to_string()));
//        std::string cert = base_name + ".pem";
//        std::string priv = base_name + "_key.pem";
        
//#ifdef TORRENT_WINDOWS
//        struct ::_stat st;
//        int ret = ::_stat(cert.c_str(), &st);
//        if (ret < 0 || (st.st_mode & _S_IFREG) == 0)
//#else
//        struct ::stat st;
//        int ret = ::stat(cert.c_str(), &st);
//        if (ret < 0 || (st.st_mode & S_IFREG) == 0)
//#endif
//        {
//            char msg[256];
//            snprintf(msg, sizeof(msg), "ERROR. could not load certificate %s: %s\n", cert.c_str(), strerror(errno));
//            if (g_log_file) fprintf(g_log_file, "[%s] %s\n", timestamp(), msg);
//            return true;
//        }
        
//#ifdef TORRENT_WINDOWS
//        ret = ::_stat(priv.c_str(), &st);
//        if (ret < 0 || (st.st_mode & _S_IFREG) == 0)
//#else
//        ret = ::stat(priv.c_str(), &st);
//        if (ret < 0 || (st.st_mode & S_IFREG) == 0)
//#endif
//        {
//            char msg[256];
//            snprintf(msg, sizeof(msg), "ERROR. could not load private key %s: %s\n", priv.c_str(), strerror(errno));
//            if (g_log_file) fprintf(g_log_file, "[%s] %s\n", timestamp(), msg);
//            return true;
//        }
        
//        char msg[256];
//        snprintf(msg, sizeof(msg), "loaded certificate %s and key %s\n", cert.c_str(), priv.c_str());
//        if (g_log_file) fprintf(g_log_file, "[%s] %s\n", timestamp(), msg);
        
//        h.set_ssl_certificate(cert, priv, "certificates/dhparams.pem", "1234");
//        h.resume();
//    }
//#endif
    
//    // don't log every peer we try to connect to
//    if (alert_cast<peer_connect_alert>(a)) return true;
    
//    if (peer_disconnected_alert* pd = alert_cast<peer_disconnected_alert>(a))
//    {
//        // ignore failures to connect and peers not responding with a
//        // handshake. The peers that we successfully connect to and then
//        // disconnect is more interesting.
//        if (pd->operation == op_connect
//                || pd->error == error_code(errors::timed_out_no_handshake
//                                           , get_libtorrent_category()))
//            return true;
//    }
    
//    if (metadata_received_alert* p = alert_cast<metadata_received_alert>(a))
//    {
//        // if we have a monitor dir, save the .torrent file we just received in it
//        // also, add it to the files map, and remove it from the non_files list
//        // to keep the scan dir logic in sync so it's not removed, or added twice
//        torrent_handle h = p->handle;
//        if (h.is_valid())
//        {
//            boost::shared_ptr<const torrent_info> ti = h.torrent_file();
//            create_torrent ct(*ti);
//            entry te = ct.generate();
//            std::vector<char> buffer;
//            bencode(std::back_inserter(buffer), te);
//            sha1_hash hash = ti->info_hash();
//            std::string filename = ti->name() + "." + to_hex(hash.to_string()) + ".torrent";
//            filename = path_append(monitor_dir, filename);
//            save_file(filename, buffer);
            
//            files.insert(std::pair<std::string, libtorrent::torrent_handle>(filename, h));
//            hash_to_filename.insert(std::make_pair(hash, filename));
//            non_files.erase(h);
//        }
//    }
//    else if (add_torrent_alert* p = alert_cast<add_torrent_alert>(a))
//    {
//        std::string filename;
//        if (p->params.userdata)
//        {
//            filename = (char*)p->params.userdata;
//            free(p->params.userdata);
//        }
        
//        if (p->error)
//        {
//            fprintf(stderr, "failed to add torrent: %s %s\n", filename.c_str()
//                    , p->error.message().c_str());
//        }
//        else
//        {
//            torrent_handle h = p->handle;
            
//            if (!filename.empty())
//                files[filename] = h;
//            else
//                non_files.insert(h);
            
//            h.set_max_connections(max_connections_per_torrent);
//            h.set_max_uploads(-1);
//            h.set_upload_limit(torrent_upload_limit);
//            h.set_download_limit(torrent_download_limit);
            
//            // if we have a peer specified, connect to it
//            if (!peer.empty())
//            {
//                char* port = (char*) strrchr((char*)peer.c_str(), ':');
//                if (port != NULL)
//                {
//                    *port++ = 0;
//                    char const* ip = peer.c_str();
//                    int peer_port = atoi(port);
//                    error_code ec;
//                    if (peer_port > 0)
//                        h.connect_peer(tcp::endpoint(address::from_string(ip, ec), peer_port));
//                }
//            }
            
//            sha1_hash info_hash;
//            if (p->params.ti)
//            {
//                info_hash = p->params.ti->info_hash();
//            }
//            else if (!p->params.info_hash.is_all_zeros())
//            {
//                info_hash = p->params.info_hash;
//            }
//            else
//            {
//                info_hash = h.info_hash();
//            }
//            hash_to_filename.insert(std::make_pair(info_hash, filename));
//        }
//    }
//    else if (torrent_finished_alert* p = alert_cast<torrent_finished_alert>(a))
//    {
//        p->handle.set_max_connections(max_connections_per_torrent / 2);
        
//        // write resume data for the finished torrent
//        // the alert handler for save_resume_data_alert
//        // will save it to disk
//        torrent_handle h = p->handle;
//        h.save_resume_data();
//        ++num_outstanding_resume_data;
//    }
//    else if (save_resume_data_alert* p = alert_cast<save_resume_data_alert>(a))
//    {
//        --num_outstanding_resume_data;
//        torrent_handle h = p->handle;
//        TORRENT_ASSERT(p->resume_data);
//        if (p->resume_data)
//        {
//            std::vector<char> out;
//            bencode(std::back_inserter(out), *p->resume_data);
//            torrent_status st = h.status(torrent_handle::query_save_path);
//            save_file(path_append(st.save_path, path_append(".resume", leaf_path(
//                                                                hash_to_filename[st.info_hash]) + ".resume")), out);
//            if (h.is_valid()
//                    && non_files.find(h) == non_files.end()
//                    && std::find_if(files.begin(), files.end()
//                                    , boost::bind(&handles_t::value_type::second, _1) == h) == files.end())
//                ses.remove_torrent(h);
//        }
//    }
//    else if (save_resume_data_failed_alert* p = alert_cast<save_resume_data_failed_alert>(a))
//    {
//        --num_outstanding_resume_data;
//        torrent_handle h = p->handle;
//        if (h.is_valid())
//        {
//            fprintf(stderr, "FAILED TO SAVE RESUME DATA: %s\n"
//                    , h.status().name.c_str());
//        }
//        if (h.is_valid()
//                && non_files.find(h) == non_files.end()
//                && std::find_if(files.begin(), files.end()
//                                , boost::bind(&handles_t::value_type::second, _1) == h) == files.end())
//            ses.remove_torrent(h);
//    }
//    else if (torrent_paused_alert* p = alert_cast<torrent_paused_alert>(a))
//    {
//        // write resume data for the finished torrent
//        // the alert handler for save_resume_data_alert
//        // will save it to disk
//        torrent_handle h = p->handle;
//        h.save_resume_data();
//        ++num_outstanding_resume_data;
//    }
//    else if (state_update_alert* p = alert_cast<state_update_alert>(a))
//    {
//        view.update_torrents(p->status);
//        return true;
//    }
//    return false;
//}

//void print_piece(libtorrent::partial_piece_info* pp
//                 , libtorrent::cached_piece_info* cs
//                 , std::vector<libtorrent::peer_info> const& peers
//                 , torrent_status const* ts
//                 , std::string& out)
//{
//    using namespace libtorrent;
    
//    char str[1024];
//    assert(pp == 0 || cs == 0 || cs->piece == pp->piece_index);
//    int piece = pp ? pp->piece_index : cs->piece;
//    int num_blocks = pp ? pp->blocks_in_piece : cs->blocks.size();
    
//    snprintf(str, sizeof(str), "%5d:[", piece);
//    out += str;
//    char const* last_color = 0;
//    for (int j = 0; j < num_blocks; ++j)
//    {
//        int index = pp ? peer_index(pp->blocks[j].peer(), peers) % 36 : -1;
//        char chr = '+';
//        if (index >= 0)
//            chr = (index < 10)?'0' + index:'A' + index - 10;
//        bool snubbed = index >= 0 ? peers[index].flags & peer_info::snubbed : false;
        
//        char const* color = "";
        
//        if (pp == 0)
//        {
//            color = cs->blocks[j] ? esc("34;7") : esc("0");
//            chr = ' ';
//        }
//        else
//        {
//            if (cs && cs->blocks[j] && pp->blocks[j].state != block_info::finished)
//                color = esc("36;7");
//            else if (pp->blocks[j].bytes_progress > 0
//                     && pp->blocks[j].state == block_info::requested)
//            {
//                if (pp->blocks[j].num_peers > 1) color = esc("1;7");
//                else color = snubbed ? esc("35;7") : esc("33;7");
//                chr = '0' + (pp->blocks[j].bytes_progress * 10 / pp->blocks[j].block_size);
//            }
//            else if (pp->blocks[j].state == block_info::finished) color = esc("32;7");
//            else if (pp->blocks[j].state == block_info::writing) color = esc("36;7");
//            else if (pp->blocks[j].state == block_info::requested) color = snubbed ? esc("35;7") : esc("0");
//            else { color = esc("0"); chr = ' '; }
//        }
//        if (last_color == 0 || strcmp(last_color, color) != 0)
//        {
//            snprintf(str, sizeof(str), "%s%c", color, chr);
//            out += str;
//        }
//        else
//            out += chr;
        
//        last_color = color;
//    }
//    out += esc("0");
//    out += "]";
//    /*
//    char const* cache_kind_str[] = {"read", "write", "read-volatile"};
//    snprintf(str, sizeof(str), " %3d cache age: %-5.1f state: %s%s\n"
//        , cs ? cs->next_to_hash : 0
//        , cs ? (total_milliseconds(clock_type::now() - cs->last_use) / 1000.f) : 0.f
//        , cs ? cache_kind_str[cs->kind] : "N/A"
//        , ts && ts->pieces.size() ? (ts->pieces[piece] ? " have" : " dont-have") : "");
//    out += str;
//*/
//}


//void startDownloading(QString torrentFilename){

//    using namespace libtorrent;
//    namespace lt = libtorrent;
    
//    settings_pack settings;
//    settings.set_int(settings_pack::cache_size, cache_size);
//    settings.set_int(settings_pack::active_loaded_limit, 20);
//    settings.set_int(settings_pack::choking_algorithm, settings_pack::rate_based_choker);
    
//    int refresh_delay = 500;
//#ifndef TORRENT_DISABLE_DHT
//    bool start_dht = true;
//#endif
//    bool rate_limit_locals = false;
    
//    std::deque<std::string> events;
    
//    //chrono error
//    //time_point next_dir_scan = clock_type::now();
    
//    // the string is the filename of the .torrent file, but only if
//    // it was added through the directory monitor. It is used to
//    // be able to remove torrents that were added via the directory
//    // monitor when they're not in the directory anymore.
//    handles_t files;
    
//    // torrents that were not added via the monitor dir
//    std::set<torrent_handle> non_files;
    
//    // load the torrents given on the commandline
    
//    std::vector<add_torrent_params> magnet_links;
//    std::vector<std::string> torrents;
//    ip_filter loaded_ip_filter;

//    torrents.push_back(torrentFilename.toLatin1().data());
    
//#ifdef TORRENT_WINDOWS
//    int ret = _mkdir(path_append(save_path, ".resume").c_str());
//#else
//    int ret = mkdir(path_append(save_path, ".resume").c_str(), 0777);
//#endif
//    if (ret < 0)
//        fprintf(stderr, "failed to create resume file directory: (%d) %s\n"
//                , errno, strerror(errno));
//    if (bind_to_interface.empty()) bind_to_interface = "0.0.0.0";
//    char iface_str[100];
//    snprintf(iface_str, sizeof(iface_str), "%s:%d", bind_to_interface.c_str()
//             , listen_port);
//    settings.set_str(settings_pack::listen_interfaces, iface_str);
    
//    settings.set_str(settings_pack::user_agent, "P2P/" LIBTORRENT_VERSION);
    
//    settings.set_int(settings_pack::alert_mask, alert::all_categories
//                     & ~(alert::dht_notification
//                         + alert::progress_notification
//                         + alert::stats_notification
//                         + alert::session_log_notification
//                         + alert::torrent_log_notification
//                         + alert::peer_log_notification
//                         + alert::dht_log_notification
//                         + alert::picker_log_notification
//                         ));
    
//    libtorrent::session ses(settings);
    
//    ses.set_ip_filter(loaded_ip_filter);
//    ses.set_load_function(&load_torrent);
    
//    error_code ec;
    
//    //start_dht
//#ifndef TORRENT_DISABLE_DHT
//    dht_settings dht;
//    dht.privacy_lookups = true;
//    ses.set_dht_settings(dht);
    
//    //
//    if (start_dht)
//    {
//        settings.set_bool(settings_pack::use_dht_as_fallback, false);
        
//        ses.add_dht_router(std::make_pair(
//                               std::string("router.bittorrent.com"), 6881));
//        ses.add_dht_router(std::make_pair(
//                               std::string("router.utorrent.com"), 6881));
//        ses.add_dht_router(std::make_pair(
//                               std::string("router.bitcomet.com"), 6881));
//    }
    
//    //bdecode
//    std::vector<char> in;
//    if (load_file(".ses_state", in, ec) == 0)
//    {
//        bdecode_node e;
//        if (bdecode(&in[0], &in[0] + in.size(), e, ec) == 0)
//            ses.load_state(e, session::save_dht_state);
//    }
//#endif
    
//    //async_add_torrent
//    for (std::vector<add_torrent_params>::iterator i = magnet_links.begin()
//         , end(magnet_links.end()); i != end; ++i)
//    {
//        ses.async_add_torrent(*i);
//    }
    
//    //add_torrent
//    for (std::vector<std::string>::iterator i = torrents.begin()
//         , end(torrents.end()); i != end; ++i)
//    {
//        if (std::strstr(i->c_str(), "http://") == i->c_str()
//                || std::strstr(i->c_str(), "https://") == i->c_str()
//                || std::strstr(i->c_str(), "magnet:") == i->c_str())
//        {
//            add_torrent_params p;
//            if (seed_mode) p.flags |= add_torrent_params::flag_seed_mode;
//            if (disable_storage) p.storage = disabled_storage_constructor;
//            if (share_mode) p.flags |= add_torrent_params::flag_share_mode;
//            p.save_path = save_path;
//            p.storage_mode = (storage_mode_t)allocation_mode;
//            p.url = *i;
            
//            std::vector<char> buf;
//            if (std::strstr(i->c_str(), "magnet:") == i->c_str())
//            {
//                add_torrent_params tmp;
//                ec.clear();
//                parse_magnet_uri(*i, tmp, ec);
                
//                if (ec) continue;
                
//                std::string filename = path_append(save_path, path_append(".resume"
//                                                                          , to_hex(tmp.info_hash.to_string()) + ".resume"));
                
//                load_file(filename, p.resume_data, ec);
//            }
            
//            printf("adding URL: %s\n", i->c_str());
//            ses.async_add_torrent(p);
//            continue;
//        }
        
//        // if it's a torrent file, open it as usual
//        add_torrent(ses, files, non_files, i->c_str()
//                    , allocation_mode, save_path, false
//                    , torrent_upload_limit, torrent_download_limit);
//    }
    
//    // main loop
//    std::vector<peer_info> peers;
//    std::vector<partial_piece_info> queue;
    
//    int tick = 0;
    
//#ifndef WIN32
//    signal(SIGTERM, signal_handler);
//    signal(SIGINT, signal_handler);
//#endif
    
//    while (!quit)
//    {
//        ++tick;
//        ses.post_torrent_updates();
//        ses.post_session_stats();
//        ses.post_dht_stats();
        
//        int terminal_width = 80;
//        int terminal_height = 50;
//        terminal_size(&terminal_width, &terminal_height);
//        view.set_size(terminal_width, terminal_height / 3);
//        ses_view.set_pos(terminal_height / 3);
        
//        int c = 0;
//        //torrent_handle
//        torrent_handle h = view.get_active_handle();
        
//        //quit statement
//        //if (c == 'q') break;
//        MainWindow *mainObj = new MainWindow();
//        if(mainObj->quitProgram == true){
//            break;
//        }
        
//        // loop through the alert queue to see if anything has happened.
//        std::vector<alert*> alerts;
//        ses.pop_alerts(&alerts);
//        std::string now = timestamp();
//        for (std::vector<alert*>::iterator i = alerts.begin()
//             , end(alerts.end()); i != end; ++i)
//        {
//            TORRENT_TRY
//            {
//                if (!::handle_alert(ses, *i, files, non_files))
//                {
//                    // if we didn't handle the alert, print it to the log
//                    std::string event_string;
//                    print_alert(*i, event_string);
//                    events.push_back(event_string);
//                    if (events.size() >= 20) events.pop_front();
//                }
//            } TORRENT_CATCH(std::exception& e) {}
//        }
//        alerts.clear();
        
//        std::string out;
        
//        char str[500];
        
//        int pos = view.height() + ses_view.height();
//        set_cursor_pos(0, pos);
        
//        int cache_flags = print_downloads ? 0 : lt::session::disk_cache_no_pieces;
        
//        cache_status cs;
//        ses.get_cache_info(&cs, h, cache_flags);
        
//#ifndef TORRENT_DISABLE_DHT
//        if (show_dht_status)
//        {
//            // TODO: 3 expose these counters as performance counters
//            /*
//            snprintf(str, sizeof(str), "DHT nodes: %d DHT cached nodes: %d "
//                "total DHT size: %" PRId64 " total observers: %d\n"
//                , sess_stat.dht_nodes, sess_stat.dht_node_cache, sess_stat.dht_global_nodes
//                , sess_stat.dht_total_allocations);
//            out += str;
//*/
            
//            int bucket = 0;
//            for (std::vector<dht_routing_bucket>::iterator i = dht_routing_table.begin()
//                 , end(dht_routing_table.end()); i != end; ++i, ++bucket)
//            {
//                char const* progress_bar =
//                        "################################"
//                        "################################"
//                        "################################"
//                        "################################";
//                char const* short_progress_bar = "--------";
//                snprintf(str, sizeof(str)
//                         , "%3d [%3d, %d] %s%s\x1b[K\n"
//                         , bucket, i->num_nodes, i->num_replacements
//                         , progress_bar + (128 - i->num_nodes)
//                         , short_progress_bar + (8 - (std::min)(8, i->num_replacements)));
//                out += str;
//                pos += 1;
//            }
            
//            for (std::vector<dht_lookup>::iterator i = dht_active_requests.begin()
//                 , end(dht_active_requests.end()); i != end; ++i)
//            {
//                snprintf(str, sizeof(str)
//                         , "  %10s [limit: %2d] "
//                           "in-flight: %-2d "
//                           "left: %-3d "
//                           "1st-timeout: %-2d "
//                           "timeouts: %-2d "
//                           "responses: %-2d "
//                           "last_sent: %-2d\x1b[K\n"
//                         , i->type
//                         , i->branch_factor
//                         , i->outstanding_requests
//                         , i->nodes_left
//                         , i->first_timeout
//                         , i->timeouts
//                         , i->responses
//                         , i->last_sent);
//                out += str;
//                pos += 1;
//            }
//        }
//#endif
        

        
//    }
//}









