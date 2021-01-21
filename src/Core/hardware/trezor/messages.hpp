#include <cstdint>
#include <string>
#include <vector>

namespace hw { namespace trezor { namespace messages {

enum MessageType {
	MessageType_Initialize                                = 0,
	MessageType_Ping                                      = 1,
	MessageType_Success                                   = 2,
	MessageType_Failure                                   = 3,
	MessageType_ChangePin                                 = 4,
	MessageType_WipeDevice                                = 5,
	MessageType_GetEntropy                                = 9,
	MessageType_Entropy                                   = 10,
	MessageType_LoadDevice                                = 13,
	MessageType_ResetDevice                               = 14,
	MessageType_Features                                  = 17,
	MessageType_PinMatrixRequest                          = 18,
	MessageType_PinMatrixAck                              = 19,
	MessageType_Cancel                                    = 20,
	MessageType_ClearSession                              = 24,
	MessageType_ApplySettings                             = 25,
	MessageType_ButtonRequest                             = 26,
	MessageType_ButtonAck                                 = 27,
	MessageType_ApplyFlags                                = 28,
	MessageType_BackupDevice                              = 34,
	MessageType_EntropyRequest                            = 35,
	MessageType_EntropyAck                                = 36,
	MessageType_PassphraseRequest                         = 41,
	MessageType_PassphraseAck                             = 42,
	MessageType_PassphraseStateRequest                    = 77,
	MessageType_PassphraseStateAck                        = 78,
	MessageType_RecoveryDevice                            = 45,
	MessageType_WordRequest                               = 46,
	MessageType_WordAck                                   = 47,
	MessageType_GetFeatures                               = 55,
	MessageType_SetU2FCounter                             = 63,
	MessageType_FirmwareErase                             = 6,
	MessageType_FirmwareUpload                            = 7,
	MessageType_FirmwareRequest                           = 8,
	MessageType_SelfTest                                  = 32,
	MessageType_GetPublicKey                              = 11,
	MessageType_PublicKey                                 = 12,
	MessageType_SignTx                                    = 15,
	MessageType_TxRequest                                 = 21,
	MessageType_TxAck                                     = 22,
	MessageType_GetAddress                                = 29,
	MessageType_Address                                   = 30,
	MessageType_SignMessage                               = 38,
	MessageType_VerifyMessage                             = 39,
	MessageType_MessageSignature                          = 40,
	MessageType_CipherKeyValue                            = 23,
	MessageType_CipheredKeyValue                          = 48,
	MessageType_SignIdentity                              = 53,
	MessageType_SignedIdentity                            = 54,
	MessageType_GetECDHSessionKey                         = 61,
	MessageType_ECDHSessionKey                            = 62,
	MessageType_CosiCommit                                = 71,
	MessageType_CosiCommitment                            = 72,
	MessageType_CosiSign                                  = 73,
	MessageType_CosiSignature                             = 74,
	MessageType_DebugLinkDecision                         = 100,
	MessageType_DebugLinkGetState                         = 101,
	MessageType_DebugLinkState                            = 102,
	MessageType_DebugLinkStop                             = 103,
	MessageType_DebugLinkLog                              = 104,
	MessageType_DebugLinkMemoryRead                       = 110,
	MessageType_DebugLinkMemory                           = 111,
	MessageType_DebugLinkMemoryWrite                      = 112,
	MessageType_DebugLinkFlashErase                       = 113,
	MessageType_EthereumGetPublicKey                      = 450,
	MessageType_EthereumPublicKey                         = 451,
	MessageType_EthereumGetAddress                        = 56,
	MessageType_EthereumAddress                           = 57,
	MessageType_EthereumSignTx                            = 58,
	MessageType_EthereumTxRequest                         = 59,
	MessageType_EthereumTxAck                             = 60,
	MessageType_EthereumSignMessage                       = 64,
	MessageType_EthereumVerifyMessage                     = 65,
	MessageType_EthereumMessageSignature                  = 66,
	MessageType_NEMGetAddress                             = 67,
	MessageType_NEMAddress                                = 68,
	MessageType_NEMSignTx                                 = 69,
	MessageType_NEMSignedTx                               = 70,
	MessageType_NEMDecryptMessage                         = 75,
	MessageType_NEMDecryptedMessage                       = 76,
	MessageType_LiskGetAddress                            = 114,
	MessageType_LiskAddress                               = 115,
	MessageType_LiskSignTx                                = 116,
	MessageType_LiskSignedTx                              = 117,
	MessageType_LiskSignMessage                           = 118,
	MessageType_LiskMessageSignature                      = 119,
	MessageType_LiskVerifyMessage                         = 120,
	MessageType_LiskGetPublicKey                          = 121,
	MessageType_LiskPublicKey                             = 122,
	MessageType_TezosGetAddress                           = 150,
	MessageType_TezosAddress                              = 151,
	MessageType_TezosSignTx                               = 152,
	MessageType_TezosSignedTx                             = 153,
	MessageType_TezosGetPublicKey                         = 154,
	MessageType_TezosPublicKey                            = 155,
	MessageType_StellarSignTx                             = 202,
	MessageType_StellarTxOpRequest                        = 203,
	MessageType_StellarGetAddress                         = 207,
	MessageType_StellarAddress                            = 208,
	MessageType_StellarCreateAccountOp                    = 210,
	MessageType_StellarPaymentOp                          = 211,
	MessageType_StellarPathPaymentOp                      = 212,
	MessageType_StellarManageOfferOp                      = 213,
	MessageType_StellarCreatePassiveOfferOp               = 214,
	MessageType_StellarSetOptionsOp                       = 215,
	MessageType_StellarChangeTrustOp                      = 216,
	MessageType_StellarAllowTrustOp                       = 217,
	MessageType_StellarAccountMergeOp                     = 218,
	MessageType_StellarManageDataOp                       = 220,
	MessageType_StellarBumpSequenceOp                     = 221,
	MessageType_StellarSignedTx                           = 230,
	MessageType_TronGetAddress                            = 250,
	MessageType_TronAddress                               = 251,
	MessageType_TronSignTx                                = 252,
	MessageType_TronSignedTx                              = 253,
	MessageType_CardanoSignTx                             = 303,
	MessageType_CardanoTxRequest                          = 304,
	MessageType_CardanoGetPublicKey                       = 305,
	MessageType_CardanoPublicKey                          = 306,
	MessageType_CardanoGetAddress                         = 307,
	MessageType_CardanoAddress                            = 308,
	MessageType_CardanoTxAck                              = 309,
	MessageType_CardanoSignedTx                           = 310,
	MessageType_OntologyGetAddress                        = 350,
	MessageType_OntologyAddress                           = 351,
	MessageType_OntologyGetPublicKey                      = 352,
	MessageType_OntologyPublicKey                         = 353,
	MessageType_OntologySignTransfer                      = 354,
	MessageType_OntologySignedTransfer                    = 355,
	MessageType_OntologySignWithdrawOng                   = 356,
	MessageType_OntologySignedWithdrawOng                 = 357,
	MessageType_OntologySignOntIdRegister                 = 358,
	MessageType_OntologySignedOntIdRegister               = 359,
	MessageType_OntologySignOntIdAddAttributes            = 360,
	MessageType_OntologySignedOntIdAddAttributes          = 361,
	MessageType_RippleGetAddress                          = 400,
	MessageType_RippleAddress                             = 401,
	MessageType_RippleSignTx                              = 402,
	MessageType_RippleSignedTx                            = 403,
	MessageType_MoneroTransactionInitRequest              = 501,
	MessageType_MoneroTransactionInitAck                  = 502,
	MessageType_MoneroTransactionSetInputRequest          = 503,
	MessageType_MoneroTransactionSetInputAck              = 504,
	MessageType_MoneroTransactionInputsPermutationRequest = 505,
	MessageType_MoneroTransactionInputsPermutationAck     = 506,
	MessageType_MoneroTransactionInputViniRequest         = 507,
	MessageType_MoneroTransactionInputViniAck             = 508,
	MessageType_MoneroTransactionAllInputsSetRequest      = 509,
	MessageType_MoneroTransactionAllInputsSetAck          = 510,
	MessageType_MoneroTransactionSetOutputRequest         = 511,
	MessageType_MoneroTransactionSetOutputAck             = 512,
	MessageType_MoneroTransactionAllOutSetRequest         = 513,
	MessageType_MoneroTransactionAllOutSetAck             = 514,
	MessageType_MoneroTransactionSignInputRequest         = 515,
	MessageType_MoneroTransactionSignInputAck             = 516,
	MessageType_MoneroTransactionFinalRequest             = 517,
	MessageType_MoneroTransactionFinalAck                 = 518,
	MessageType_MoneroKeyImageExportInitRequest           = 530,
	MessageType_MoneroKeyImageExportInitAck               = 531,
	MessageType_MoneroKeyImageSyncStepRequest             = 532,
	MessageType_MoneroKeyImageSyncStepAck                 = 533,
	MessageType_MoneroKeyImageSyncFinalRequest            = 534,
	MessageType_MoneroKeyImageSyncFinalAck                = 535,
	MessageType_MoneroGetAddress                          = 540,
	MessageType_MoneroAddress                             = 541,
	MessageType_MoneroGetWatchKey                         = 542,
	MessageType_MoneroWatchKey                            = 543,
	MessageType_DebugMoneroDiagRequest                    = 546,
	MessageType_DebugMoneroDiagAck                        = 547,
	MessageType_MoneroGetTxKeyRequest                     = 550,
	MessageType_MoneroGetTxKeyAck                         = 551,
	MessageType_MoneroLiveRefreshStartRequest             = 552,
	MessageType_MoneroLiveRefreshStartAck                 = 553,
	MessageType_MoneroLiveRefreshStepRequest              = 554,
	MessageType_MoneroLiveRefreshStepAck                  = 555,
	MessageType_MoneroLiveRefreshFinalRequest             = 556,
	MessageType_MoneroLiveRefreshFinalAck                 = 557,
	MessageType_EosGetPublicKey                           = 600,
	MessageType_EosPublicKey                              = 601,
	MessageType_EosSignTx                                 = 602,
	MessageType_EosTxActionRequest                        = 603,
	MessageType_EosTxActionAck                            = 604,
	MessageType_EosSignedTx                               = 605,
	MessageType_BytecoinEmptyResponse                     = 800,
	MessageType_BytecoinStartRequest                      = 801,
	MessageType_BytecoinStartResponse                     = 802,
	MessageType_BytecoinScanOutputsRequest                = 803,
	MessageType_BytecoinScanOutputsResponse               = 804,
	MessageType_BytecoinGenerateKeyimageRequest           = 805,
	MessageType_BytecoinGenerateKeyimageResponse          = 806,
	MessageType_BytecoinGenerateOutputSeedRequest         = 807,
	MessageType_BytecoinGenerateOutputSeedResponse        = 808,
	MessageType_BytecoinExportViewWalletRequest           = 809,
	MessageType_BytecoinExportViewWalletResponse          = 810,
	MessageType_BytecoinSignStartRequest                  = 811,
	MessageType_BytecoinSignAddInputRequest               = 813,
	MessageType_BytecoinSignAddOutputRequest              = 815,
	MessageType_BytecoinSignAddOutputResponse             = 816,
	MessageType_BytecoinSignAddExtraRequest               = 817,
	MessageType_BytecoinSignStepARequest                  = 819,
	MessageType_BytecoinSignStepAResponse                 = 820,
	MessageType_BytecoinSignStepAMoreDataRequest          = 821,
	MessageType_BytecoinSignGetC0Request                  = 823,
	MessageType_BytecoinSignGetC0Response                 = 824,
	MessageType_BytecoinSignStepBRequest                  = 825,
	MessageType_BytecoinSignStepBResponse                 = 826,
	MessageType_BytecoinStartProofRequest                 = 827
};

}}}  // namespace hw::trezor::messages
