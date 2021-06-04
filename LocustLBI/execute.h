#pragma once
#include "rlua.h"

std::string lbidata = "017206737472696E670462797465016706727368696674066C73686966740462616E64016E017701420143014401450146014705696E64657806736F75726365014903737562014D05735F737A7401510152015505735F696E7405735F696E730576616C7565026F700141034142430162064F704172674B0569735F4B4201630569735F4B43034142780242780469735F4B044173427803734278015705735F6E756D026133026137026139077661726E616D65077374617274706305656E647063026162026164096E756D757076616C73096E756D706172616D7304636F646505636F6E73740473756273056C696E65730669706169727307636F6E73745F4207636F6E73745F43041B4C756115696E76616C6964204C7561207369676E61747572650661737365727413696E76616C6964204C75612076657273696F6E12696E76616C6964204C756120666F726D6174066C6974746C6503626967056572726F7216756E737570706F7274656420666C6F61742073697A6508407669727475616C01610570616972730573746F72650261720261760673656C6563740123026179027063056D61746368135E282E2D293A2825642B293A25732B282E2B290130013F06666F726D61741125733A25693A205B25733A25695D20257302617A03656E7606757076616C73077661726172677305737461636B046D6174680361627308746F6E756D6265722460666F726020696E697469616C2076616C7565206D7573742062652061206E756D6265721C60666F7260206C696D6974206D7573742062652061206E756D6265721B60666F72602073746570206D7573742062652061206E756D6265720473697A65046C697374026147057063616C6C0262650767657466656E761A4661696C656420746F20636F6D70696C65207363726970743A2005737061776E036269740562697433320772657175697265057461626C6506756E7061636B064F7041726752064F704172674E064F7041726755047761726E154C6F637573744C4249202D20646F6E7420736B6964025F47096C6F637573744C4249220D040000138C040000520701005205020052060300A8050D00520A0000520B0700520C07004C290002A4090200000400809F0904028C0B0001260C0701B20A0B0C0908090A430404088B05F3FF8204020003030103020400040080000301180000000000000000000000000000000000000001000000000D0401004A8C05FFFFFB0700004D06070200000000520703008C0807009F060302B2040506FB0700004D06070200000000520702008C0807009F060302FB0800004D07087C01000000FB0900004D08097002000000520903008C0A7F009F0803028C0901009F07030243050607FB0900004D08097C01000000520901008C0A08009F08030243070008FB0900004D08097C01000000FB0A00004D090A7002000000520A02008C0B7F009F0903028C0A10009F080302430607088C070100D805080003000000D8060300030000005B080403820802008C0700008C05010065000A00D805090004000000D8060400030000005B0904053E080903820802005B0904033E080903820802008C0B0200780C0504B20A0B0C0909040A8C0B01003E0C0706430A0B0C0908090A8208020007030403050306020000000000000000020000000000C05F4002000000000000F03F020000000000006041000701180000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000012080100488C09FFFFFB0B00004D0A0B0200000000520B07008C0C07009F0A0302B208090AFB0B00004D0A0B7C01000000FB0C00004D0B0C7002000000520C07008C0D7F009F0B03028C0C04009F0A0302FB0C00004D0B0C0200000000520C06008C0D04009F0B030243090A0BFB0C00004D0B0C7002000000520C06008C0D0F009F0B03025B0A0B038C0B01005B11050443100A115B110405430F10115B100306430E0F105B0F0207430D0E0F5B0E0108430C0D0E430A0C00D809080009000000D80A0300090000005B0C0809820C02008C0B00008C09010065000A00D80909000A000000D80A0400090000005B0D080B3E0C0D09820C02005B0D08093E0C0D09820C02008C0F02007810090CB20E0F10090D080E3E0F0A0D430E0B0F090C0D0E820C02000E03040305030602000000000000F04202000000000000704202000000000000F04102000000000000704102000000000000F040020000000000007040020000000000000000020000000000FC9F4002000000000000F03F020000000000F88F400200000000000030430008011800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000803010007FB0300005204000052050100780602008C0701009F030500820300000102000000000000F03F000901180000000000000001000000000803010007FB0300005204000078050200520601008C07FFFF9F030500820300000102000000000000F03F000A0118000000000000000100000000070201000AFB0200005204000052050100950601004C290002A4030300000810809F0304009F0200008202000004020000000000000840030103020400081080000B01180000000000000000000001000000000B0201000E5203000052040100950501004C290002A4020300000810809F020405FB060000520705005208040052090300520A02009F0605008206000004020000000000000840030103020400081080000C011800000000000000000000000000000100000000070201000AFB0200005204000052050100950601004C290002A4030300000810809F0304009F0200008202000004020000000000001C40030103020400081080000D011800000000000000000000010000000013020100125203000052040100950501004C290002A4020300000810809F020409FB0A0000520B0900520C0800520D0700520E0600520F05005210040052110300521202009F0A0900820A000004020000000000001C40030103020400081080000E01180000000000000000000000000000000000000100000000060100000E4D010002000000004D0300620100000052040100520501004C290002A4020400000C20809F0204029503010530030002000000008202020006030F03100301030204000C208002000000000000F03F0011011800000000000000000000000000000100000000070200000F4D03000200000000430203014D040062010000004D05000200000000780602024C2D0002A4030500001030809F03040230020002000000008203020006030F031002000000000000F03F0301031204001030800013011800000000000000000000000000000001000000000701010012BC01001A000000009F010202C6020000F5010C0001000000FB04000052050000520601009F0403028C0501008C06FEFF4C2D0002A4030400000C20809F03040252020300820202000503140200000000000000000301031204000C2080001501180000000000000000000000000000000000000100000000060102000E4D02000200000000FB03000043010203FB0201004D030062010000004D04000200000000520501009F02040230010002000000008202020002030F031000000118000000000000000000000000000001000000000302000004D902000012000000120001008202020000010C160118000000000100000000050102000DFB0100004D020062000000004D030002010000009F0103024D03000201000000FB04010043020304300200020100000082010200020310030F000001180000000000000000000000000001000000000302000004D902000012000100120000008202020000010E170118000000000100000000100103008C01BC0100E9000000009F010202FF020000000000008C050100520301008C040100A8038200BC0600A3010000009F060202FB0800004D07087002000000520806008C093F009F070302FB09010087080907FB0A020087090A07E20A060030060ACC0300000030070A6904000000FB0C00004D0B0C7002000000FB0D00004D0C0D0207000000520D06008C0E06009F0C03028C0DFF009F0B0302300B0A6005000000D808380008000000FB0C00004D0B0C7002000000FB0D00004D0C0D0207000000520D06008C0E17009F0C03028C0DFF019F0B0302300B0A6309000000FB0C00004D0B0C7002000000FB0D00004D0C0D0207000000520D06008C0E0E009F0C03028C0DFF019F0B0302300B0A620A000000A90B00004D0C09830B000000D80C08000C0000004D0C0A63090000008C0DFF00B70D02000C000000A90B0001A90B0100300B0A660D000000A90B00004D0C09820E000000D80C08000C0000004D0C0A620A0000008C0DFF00B70D02000C000000A90B0001A90B0100300B0AE20F00000065002800D808170010000000FB0C00004D0B0C7002000000FB0D00004D0C0D0207000000520D06008C0E0E009F0C03026F0D11009F0B0302300B0A0A120000004D0C09830B000000F50C02000C000000A90B0001A90B0100300B0A251300000065001000D8080F0014000000FB0D00004D0C0D7002000000FB0E00004D0D0E0207000000520E06008C0F0E009F0D03026F0E11009F0C0302780B0C15300B0A90160000006A0A02058B037EFF8202020017031803190306031A031B031C05030304050304031D0309030A031E031F03200321032203230200000000F8FF0F410324032503260200000000F0FFFF40032700280118000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000A01020027BC0100E9000000009F010202FF020000000000008C050100520301008C040100A8031D00FB060000520700009F060202C6070000D806090001000000FB080000520900009F080202D808020002000000A9070001A907010065000D00D806060003000000BC0800E3040000009F0802025207080065000600D806050005000000FB080100520900009F080202520708006A0702058B03E3FF8202020006031802000000000000F03F0200000000000000000200000000000008400329020000000000001040002A011800000000000000000000000000000000000000000000000000000000000000000000000000000001000000000A02010010BC0200E9000000009F020202FF030000000000008C060100520402008C050100A8040600FB07000052080000520901009F0703026A0703068B04FAFF82030200010318002B0118000000000000000000000000000000000100000000080100000FBC0100E9000000009F010202FF020000000000008C050100520301008C040100A8030500BC0600E9000000009F0602026A0602058B03FBFF82020200010318002C01180000000000000000000000000000000100000000090101001CBC0100E9000000009F010202FF020000000000008C050100520301008C040100A8031200E2060400FB070000520800009F0702023007068501000000BC0700E9000000009F0702023007062702000000BC0700E9000000009F07020230070690030000006A0602058B03EEFF82020200050318032D032E032F050301020300300118000000000000000000000000000000000000000000000000000000000100000000080101000FBC0100E9000000009F010202FF020000000000008C050100520301008C040100A8030500FB060000520700009F0602026A0602058B03FBFF820202000103180031011800000000000000000000000000000001000000000D02080063FF02000000000000FB040000520500009F040202CA0304013003026200000000BC0400E9010000009F040201BC0400E9010000009F040201FB040100520500009F040202300402D702000000FB040100520500009F040202300402A503000000FB040100520500009F040201FB040100520500009F040201FB040200520500009F0402023004022304000000FB040300520500009F0402023004029005000000FB04040052050000520603009F0403023004029C06000000FB040500520500009F040202300402E107000000FB040600520500009F040201FB040700520500009F040201A4040900000080404D050223040000009F040204510422004D0908250A0000000E0909004D0A0290050000004D0C080A0C000000950B0C0B87090A0B3009089005000000650016004D0908660D0000000E0908004D0A0290050000004D0C08630F000000780B0C0E87090A0B300908E9100000004D0908E2110000000E0908004D0A0290050000004D0C086212000000780B0C0E87090A0B30090884130000003404DDFF82020200140310031803320333033403350336033703380400008040032502000000000000F03F03240320020000000000E06F40030903390322030A033A0021011800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000E0108008B01C6010000C6020000C6030000C6040000C6050000C6060000C6070000E20802008C09010030090802000000003000086201000000FB0B0000520C08008C0D04009F0B0302F50B020003000000A90A0001A90A010081010A04040000006F0B0400A4090600000050409F090301FB0B0100520C08009F0B0202F50B020007000000A90A0001A90A010081010A04080000006F0B0800A4090600000050409F090301FB0B0100520C08009F0B0202F50B020009000000A90A0001A90A010081010A040A0000006F0B0A00A4090600000050409F090301FB090100520A08009F090202D809020009000000A9020001A9020100FB090100520A08009F09020252030900FB090100520A08009F09020252040900FB090100520A08009F09020252050900FB090100520A08009F09020252060900FB090100520A08009F090202D809020009000000A9070001A90701000E020200FB0902002B090100FB09030052010900FB090400520A0300520B01009F090302300908E90B000000FB090400520A0400520B01009F0903023009081A0C000000FB090400520A0500520B01009F090302300908A30D0000000E070700FB090400520A0600520B01009F090302300908E30E00000065001400FB0A050087090A060E090D00FB090600520A0600FB0D0500870C0D060E0202006F0D0F00650001006F0D1000870B0C0D9F090302300908E30E00000065000400A4091200000010416F0A13009F090201FB090700520A08006F0B14009F0903008209000015030F031005020001033B033C033D0400005040020000000000405440033E020000000000000000033F0318031403190329034003410342040000104103430344004501180000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000A02000019A402010000000040520300009F020204170212004D070602020000007D010F00070000004D08067E030000004D0906020200000087070809300706CC040000003006067E030000006F0704003007060202000000C60700006A070005FA02EDFF820001000503460400000040030F0347031A00480118000000000000000000000000000000000000000000000000000100000000050300000A870300012B030700E204020030010402000000003002047E01000000520304006A0300018203020003030F03470502000100490118000000000000000000000100000000030000010CA3000000A4000100000000406F010200DD0200009F000002FF01000000000000DD020000C5010200010000008200030003034A0400000040034B004C011800000000000000000000000001000000000F0200001F4D020062000000004D0400E1010000004D060019030000007805060287030405A404060000144080520501006F0607009F040304900303089004040990050508CA060601A4070B000000A040A4080D00003040806F090E00520A0200520B0300520C0400520D0500520E06009F0807028C0900009F070301820001000F0310033702000000000000F03F034D0301034E0400144080034F035003510342040000A0400352040030408003530054011800000000000000000000000000000000000000000000000000000000000000010000000018010500B0074D010023000000004D02009C010000004D03009C020000004D0400DB030000004D0500B0040000008C06FFFFFF070000000000004D08009D050000004D09001906000000870A01094D0B0A6907000000950909088C0C1300600B67010C0000008C0C0900600B77000C0000008C0C0400600B30000C0000008C0C0200600B11000C0000008C0C0100600B08000C0000004D0C0A60090000004D0E0A630A000000870D080E6A0D080C650081034D0C0A60090000004D0D0A900B0000006A0D080C65007B038C0C0200600C0B000B0000004D0E0A60090000004D0C0A630A0000008C0D0100A80C7203C60F00006A0F080E8B0CFDFF65006E034D0C0A60090000004D0E0A630A000000D80E02000C000000A90D0001A90D01006A0D080C4D0C0A620D000000F50C62030C0000009509090865005F038C0C0400600C36000B0000008C0C0700600B1D000C0000008C0C0600600B08000C0000004D0C0A60090000004D0E0A900B000000870D030E6A0D080C65004F03C60C00004D0D0AE20E0000000E0D03004D0C0A840F000000650003004D0D0A620D000000870C080D4D0D0A60090000004D100A630A000000870F0810870E0F0C6A0E080D65003D038C0C0700600C0D000B0000004D0D0A630A000000870C040D4D0D0C7E100000004D0E0C02110000004D100A6009000000870F08106A0F0D0E65002E034D0C0A900B0000004D0E0A6009000000870D080E6A0D030C650027034D0D0A630A000000870C040D4D0D0A60090000004D0F0C7E100000004D100C0211000000870E0F106A0E080D65001B038C0C0900600CD2000B0000008C0C0E00600B57000C0000008C0C0C00600B1F000C0000008C0C0B00600B07000C0000004D0C0A6009000000FF0D0000000000006A0D080C650009034D0C0A60090000004D0D0A630A000000C60E00004D0F0AE20E0000000E0F03004D0E0A840F000000650003004D0F0A620D000000870E080F950F0C088710080D6A10080F8710080D870F100E6A0F080C6500F4028C0C0C00600C1A000B000000C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0E0A6009000000260F0C0D6A0F080E6500D802C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0E0A6009000000430F0C0D6A0F080E6500BF028C0C0E00600C5D000B0000008C0C1100600B36000C0000008C0C1000600B1A000C000000C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D0000008"
	"70D080E4D0E0A6009000000EC0F0C0D6A0F080E65009D02C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0E0A6009000000CF0F0C0D6A0F080E650084028C0C1100600C09000B0000004D0C0A60090000004D0F0A630A000000870E080F390D0E006A0D080C65007902C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0E0A6009000000B20F0C0D6A0F080E65006002C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0E0A6009000000090F0C0D6A0F080E65004702C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080E4D0F0A6009000000870E080F6A0D0E0C65002E028C0C1300600C25020B0000008C0C1D00600BE7000C0000008C0C1800600B4A000C0000008C0C1600600B1E000C0000008C0C1500600B09000C0000004D0C0A60090000004D0F0A630A000000870E080F1C0D0E006A0D080C650017024D0D0A630A000000870C080D4D100A630A000000950F10084D0D0A620D0000008C0E0100A80D040052100C008711080F730C10118B0DFCFF4D0D0A60090000006A0C080D650005028C0C1600600C23000B000000C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080EF10C02000D000000A90E0001A90E01004D100A6009000000D81002000C000000A90F0001A90F0100F10EE3010F000000950909086500E0014D0C0A90140000004309090C6500DC018C0C1800600C76000B0000008C0C1B00600B34000C0000008C0C1A00600B23000C000000C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080ED40C02000D000000A90E0001A90E01004D100A6009000000D81002000C000000A90F0001A90F0100F10EB4010F000000950909086500B1014D0E0A6009000000870D080E560C0D004D0E0A620D000000D80E02000C000000A90D0001A90D01009A0CA6010D000000950909086500A3018C0C1B00600C2A000B0000004D0C0A60090000004D0D0A630A0000004D0E0A620D000000C60F0000C6100000C6110000D80D03000C000000260F060C65000100780F0D08FB1200008713080CFB1401005215080095160C0843170C0F9F1404009F1300009F1200035210120052111300D80E04000C00000043120C10780612086500010078100E088C140100521210008C130100A8127D0143160C1478151608871611146A1608158B12FBFF650077014D0C0A60090000004D0D0A630A000000870F080D560E0F004D100A620D000000D81002000C000000A90F0001A90F01009A0E03000F0000009509090865006701870E080D6A0E080C65006401C60C0000C60D00004D0E0A66120000000E0E03004D0C0AE913000000650003004D0E0A630A000000870C080E4D0E0AE20E0000000E0E03004D0D0A840F000000650003004D0E0A620D000000870D080EB70C02000D000000A90E0001A90E01004D100A6009000000D81002000C000000A90F0001A90F0100F10E45010F00000095090908650042018C0C1D00600C20010B0000008C0C2200600BA8000C0000008C0C2000600B46000C0000008C0C1F00600B1E000C0000004D0C0A60090000004D0D0A630A000000FF0E000000000000C60F0000D80D04000C0000002610060C950F100865000100780F0D088C12010052100F008C110100A810050043150C1278141508871308146A130E128B10FBFFFB100200521107008C1200009F10030152100F0052110E00821003004D0C0A6009000000950E0C15870D080E870F080C430E0F0D95100C08870F0810C6100000BB020D0352120D00A4111800005C60819F1102029A0D060011000000D40E02000F000000A9100001A910010065000400D40F02000E000000A9100001A91001000E10FF004D110A60090000006A0E08114D120A6009000000951112196A0E08114D110A9014000000430909116500F4008C0C2000600C2B000B0000004D0C0A6009000000870D080C950F0C08870E080F95100C15870F081095100C19C6110000951210156A0F0812951210086A0E08126A0D0810FF1200000100000052130D0052140E0052150F009F130300C512130001000000521112008C1401004D120A620D0000008C130100A81205004316101478151608871611146A1608158B12FBFF87120810F51205001A00000095120C15871308106A1308126500C900950909086500C7004D0C0A6009000000C60D0000C60E0000C60F0000A4111C000000B0418712080C9F110202810111041D0000006F121D00A4101F000000E0419F100302520D1000A4111C000000B04195130C08871208139F11020281011104200000006F122000A4101F000000E0419F100302520E1000A4111C000000B04195130C15871208139F11020281011104210000006F122100A4101F000000E0419F100302520F100026100D0F6A10080C95100C086A0E081095100C156A0F08104D100A901400000043090910650095008C0C2200600C56000B0000008C0C2400600B07000C000000FB0C0200520D07004D0E0A60090000009F0C0301650089008C0C2400600C17000B0000004D0C0A60090000004D0D0A630A000000D80D05000C0000004D0D050F22000000430E0C0D78060E088C100100520E0D008C0F0100A80E780043120C10781112084D13050B23000000871213106A1208118B0EF9FF650070004D0E0A0A24000000950D0E08870C020D4D0D0CD725000000C60E0000F50D22000C000000FF0E0000000000008C110100520F0D008C100100A80F1A004314091178131408871201134D13126907000000D8130A000C00000078131108FB140300521507004D1612630A000000521708009F1404026A140E13650009004D13126907000000D813060026000000781311084D1512630A000000871404156A140E138B0FE6FF4309090D4D0F0A6009000000FB10040052110C005212030052130E009F1004026A10080F65003D004D0C0A60090000004D0D0A620D0000004D0E0A630A000000870F080CC6100000D80E02000C000000260E060CD80D05000C00000087110A094D0D11CC270000009509090878110D085B1011288C13010052110E008C120100A81126004314131043160C13871508166A150F148B11FBFF650020004D0C0A60090000004D0D0A630A000000C60E0000D80D03000C000000260E060C65000100780E0D08FB0F0200521007008C1100009F0F0301FB0F00008710080CFB1101005212080095130C0843140C0E9F1104009F1000009F0F0000820F0000650007004D0C0A60090000004D0F0A630A000000870E080F560D0E006A0D080C3009001906000000480062FC8200010029033403360355035603570358034D031B02000000000000F03F031C03090335020000000000000000030A0322033A0347030F0320033903270200000000000000400359035A04005C608102000000000000084000035B040000B041035C033D040000E041035D035E035F036003240332020000000000001040031A02000000000000494000610118000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000F000B0158A3000000FF00000000000000FF010000000000008C020000FB030000DD0400009F030003C6050000C6060000C6070000C60800008C0B0100FB0901008C0A0100A8090400780C0B00870D040B6A0D000C8B09FCFFFB09010060090C0003000000FB090100260203098C0B0100520902008C0A0100A8090500FB0E0100430D0E0B870C040D6A0C010B8B09FBFFE2090A00E20A0D0030010A0B0B00000030020A0F0C000000300A09B001000000FB0A0200300A092302000000FB0A0300300A099C03000000FB0A0400300A09E104000000FB0A0500300A096205000000FB0A0600300A099C06000000FB0A0700300A09DB070000003000099D080000008C0A0100300A09190900000052050900A4090F000000E040FB0A0800520B0500DD0C00009F0900045206090052070A0052080B000E060600FB090900520A08008C0B0100520C07009F09040082090000FB090A00520A0500520B07009F090301820001001002000000000000F03F03570334033603370310035503560358034D05090102030405060708090360035F05020B0C0362040000E0400063011800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000009030400174D030023000000004D04009C010000004D0500E1020000004D060062030000004D0700A504000000D90800001202000012000700120003001200040012000500120006001200010012000200120201001202020012020300820802000503340336033703100333011D1E011800000000000000000000000000000000000000000000000100000000030004000AFB000100FB010200FB0203009F010202A4020100000000409F0201009F000002DE000000820001000203640400000040000001180000000000000000000108000000000801020017C6010000A402010000000040D9030000120101001202000012020100120000009F0202032B020700A4040300000020406F06040052070300730506079F04020165000400A404060000005040520501009F040201C101000082000100070362040000004003420400002040036503660400005040011F0001180001000000000000000401000000000000020000000200060000000023000001BA03A3000000A4000100000000402B000700A4000300000020402B000400A4000500000040406F0100009F000202A4010800001C60802B010200A401090000007040C6020000C6030000C6040000FF050100250000008C1600006F170A006A1705166F060B006F070A006F080A006F090A006F0A0B006F0B0A006F0C0B006F0D0A006F0E0A006F0F0A006F100A006F110A006F120A006F130A006F140A006F150A00C5050611010000006F060A006F070A006F080A006F090A006F0A0A006F0B0C006F0C0A006F0D0A006F0E0A006F0F0A006F100A006F110A006F120A006F130A006F140C006F150C00C5050611110000006F060A006F070A006F080A006F090B006F0A0A00C505060621000000FF060100250000008C170000E2180F006F191000301918830D0000006F191100301918820E0000006A180617E2070F006F081200300807830D0000006F081100300807820E000000E2080F006F091300300908830D0000006F091300300908820E000000E2090F006F0A1000300A09830D0000006F0A1100300A09820E000000E20A0F006F0B1300300B0A830D0000006F0B1100300B0A820E000000E20B0F006F0C1200300C0B830D0000006F0C1100300C0B820E000000E20C0F006F0D1000300D0C830D0000006F0D1200300D0C820E000000E20D0F006F0E1200300E0D830D0000006F0E1100300E0D820E000000E20E0F006F0F1300300F0E830D0000006F0F1100300F0E820E000000E20F0F006F10120030100F830D0000006F10120030100F820E000000E2100F006F111300301110830D0000006F111300301110820E000000E2110F006F121000301211830D0000006F121200301211820E000000E2120F006F131200301312830D0000006F131200301312820E000000E2130F006F141200301413830D0000006F141200301413820E000000E2140F006F151200301514830D0000006F151200301514820E000000E2150F006F161200301615830D0000006F161200301615820E000000E2160F006F171200301716830D0000006F171200301716820E000000C506071101000000E2070F006F081200300807830D0000006F081200300807820E000000E2080F006F091000300908830D0000006F091100300908820E000000E2090F006F0A1000300A09830D0000006F0A1100300A09820E000000E20A0F006F0B1000300B0A830D0000006F0B1100300B0A820E000000E20B0F006F0C1000300C0B830D0000006F0C1000300C0B820E000000E20C0F006F0D1000300D0C830D0000006F0D1100300D0C820E000000E20D0F006F0E1200300E0D830D0000006F0E1200300E0D820E000000E20E0F006F0F1200300F0E830D0000006F0F1200300F0E820E000000E20F0F006F10120030100F830D0000006F10120030100F820E000000E2100F006F111000301110830D0000006F111300301110820E000000E2110F006F121000301211830D0000006F121300301211820E000000E2120F006F131300301312830D0000006F131300301312820E000000E2130F006F141300301413830D0000006F141300301413820E000000E2140F006F151300301514830D0000006F151100301514820E000000E2150F006F161000301615830D0000006F161100301615820E000000E2160F006F171000301716830D0000006F171100301716820E000000C506071111000000E2070F006F081100300807830D0000006F081300300807820E000000E2080F006F091300300908830D0000006F091300300908820E000000E2090F006F0A1100300A09830D0000006F0A1100300A09820E000000E20A0F006F0B1300300B0A830D0000006F0B1100300B0A820E000000E20B0F006F17130030170B830D0000006F17110030170B820E000000C506070621000000D9070000D908010012000000D909020012000000D90A030012000700D90B040012000700D90C050012000800D90D060012000800D90E070012000900D90F080012000900FF100200000000008C110400E2121600300C128914000000300D1247150000006A1210118C110800E2121600300E128914000000300F1247150000006A121011D9110900D9120A00D9130B0012001200D9140C00D9150D00D9160E00120000001200050012000600D9170F001200110012001300D918100012010400D9191100D91A120012001300D91B130012001300D904140012001300120011001200160012001700120018001200190012001A0012001B00D9021500120012001200110012000A0012000B0012001400120010001200150012010400D91C1600D91D1700D91E1800D91F1900D9201A0012001E001200010012001C0012001D0012010300D9031B0012001E00120020001200010012001F00A4211800000070416F2219009F210201A4211B000000A041D9221C001201030012010200302221951C000000C1020000820001001D036704000000400368040000204003690400004040036A036B04001C60800400007040031D03230326031E032105020D0E036C036D031F036E0340034105021415036F040000704103700371040000A04103721D000102030405060708090A0B0D0F101112131415161718191A1B1C1E2000011800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002000000020000000000000B00010000000021";
// Dont touch the bytecode above or you might fuck something up if you dunno what you're doing

void InitLBI()
{
	std::string serialized;
	for (int i = 0; i < lbidata.length(); i += 2)
	{
		std::string byte = lbidata.substr(i, 2);
		char char_ = static_cast<char>(static_cast<int>(strtol(byte.c_str(), 0, 16)));
		serialized.push_back(char_);
	}
	lbidata = serialized; // Convert bytecode hex to ascii

	r_deserialize(rL, "LBI", lbidata.c_str(), lbidata.size(), 0);
	r_spawn(rL);
}

void Execute(int rL, std::string script) 
{
	// Compile script to lua bytecode and pass it to LBI function
	lua_State* VM = lua_open();
	luaL_openlibs(VM);

	if (luaL_loadbuffer(VM, script.c_str(), script.size(), "LBI"))
	{
		const char* error = lua_tostring(VM, -1);
		r_getfield(rL, -10002, "warn");
		r_pushlstring(rL, error, strlen(error));
		r_pcall(rL, 1, 0, 0);
	}
	else 
	{
		lua_getglobal(VM, "string");
		lua_getfield(VM, -1, "dump");
		lua_pushvalue(VM, -3);
		lua_pcall(VM, 1, -1, 0);

		size_t bytecode_size;
		const char* bytecode = lua_tolstring(VM, -1, &bytecode_size);

		r_getfield(rL, -10002, "_G");
		r_getfield(rL, -1, "locustLBI");
		r_pushlstring(rL, bytecode, bytecode_size);
		r_pcall(rL, 1, -1, 0);
	}
	return;
}
