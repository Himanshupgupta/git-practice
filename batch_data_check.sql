select m.*,nm.client_id from 
(select device_id,max(nd_timestamp) as nd_timestamp from eng.node_log 
where device_id in (

) 
and network_signal is not null group by device_id) n
inner join
(select * from eng.node_log where network_signal is not null) m
on n.nd_timestamp=m.nd_timestamp
and n.device_id=m.device_id
inner join 
map.node_map nm
on n.device_id=nm.device_id
group by m.device_id,m.gw_device_id,m.nd_timestamp,m.status,battery_level,network_signal,nm.client_id,m.created_at
order by client_id;