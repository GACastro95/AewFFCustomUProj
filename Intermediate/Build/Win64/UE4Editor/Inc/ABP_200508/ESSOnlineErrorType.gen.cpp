// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSOnlineErrorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSOnlineErrorType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSOnlineErrorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSOnlineErrorType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSOnlineErrorType>()
	{
		return ESSOnlineErrorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSOnlineErrorType(ESSOnlineErrorType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSOnlineErrorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType_Hash() { return 3637955584U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSOnlineErrorType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSOnlineErrorType::ESSOnlineErrorType_None", (int64)ESSOnlineErrorType::ESSOnlineErrorType_None },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_NetworkOffline", (int64)ESSOnlineErrorType::ESSOnlineErrorType_NetworkOffline },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_ServerConnect", (int64)ESSOnlineErrorType::ESSOnlineErrorType_ServerConnect },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToYGS2", (int64)ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToYGS2 },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToSSMode", (int64)ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToSSMode },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_NetworkError", (int64)ESSOnlineErrorType::ESSOnlineErrorType_NetworkError },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_EOS", (int64)ESSOnlineErrorType::ESSOnlineErrorType_SignOut_EOS },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_NX", (int64)ESSOnlineErrorType::ESSOnlineErrorType_SignOut_NX },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_XB", (int64)ESSOnlineErrorType::ESSOnlineErrorType_SignOut_XB },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_PS", (int64)ESSOnlineErrorType::ESSOnlineErrorType_SignOut_PS },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_Offline_NX", (int64)ESSOnlineErrorType::ESSOnlineErrorType_Offline_NX },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_Offline_XB", (int64)ESSOnlineErrorType::ESSOnlineErrorType_Offline_XB },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_Offline_PS", (int64)ESSOnlineErrorType::ESSOnlineErrorType_Offline_PS },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_NeedsMasterDataUpdate", (int64)ESSOnlineErrorType::ESSOnlineErrorType_NeedsMasterDataUpdate },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_DataDownloadTimeout", (int64)ESSOnlineErrorType::ESSOnlineErrorType_DataDownloadTimeout },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_MatchStopTimeout", (int64)ESSOnlineErrorType::ESSOnlineErrorType_MatchStopTimeout },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_PlacingTimeout", (int64)ESSOnlineErrorType::ESSOnlineErrorType_PlacingTimeout },
				{ "ESSOnlineErrorType::ESSOnlineErrorType_GameResultTimeout", (int64)ESSOnlineErrorType::ESSOnlineErrorType_GameResultTimeout },
				{ "ESSOnlineErrorType::ServiceParamIsNull", (int64)ESSOnlineErrorType::ServiceParamIsNull },
				{ "ESSOnlineErrorType::Maintenance", (int64)ESSOnlineErrorType::Maintenance },
				{ "ESSOnlineErrorType::MaintenanceStart", (int64)ESSOnlineErrorType::MaintenanceStart },
				{ "ESSOnlineErrorType::Closed", (int64)ESSOnlineErrorType::Closed },
				{ "ESSOnlineErrorType::DisconnectByCheat", (int64)ESSOnlineErrorType::DisconnectByCheat },
				{ "ESSOnlineErrorType::BlockedByCheat", (int64)ESSOnlineErrorType::BlockedByCheat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockedByCheat.Name", "ESSOnlineErrorType::BlockedByCheat" },
				{ "BlueprintType", "true" },
				{ "Closed.Name", "ESSOnlineErrorType::Closed" },
				{ "DisconnectByCheat.Name", "ESSOnlineErrorType::DisconnectByCheat" },
				{ "ESSOnlineErrorType_DataDownloadTimeout.Name", "ESSOnlineErrorType::ESSOnlineErrorType_DataDownloadTimeout" },
				{ "ESSOnlineErrorType_GameResultTimeout.Name", "ESSOnlineErrorType::ESSOnlineErrorType_GameResultTimeout" },
				{ "ESSOnlineErrorType_HttpRequestToSSMode.Name", "ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToSSMode" },
				{ "ESSOnlineErrorType_HttpRequestToYGS2.Name", "ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToYGS2" },
				{ "ESSOnlineErrorType_MatchStopTimeout.Name", "ESSOnlineErrorType::ESSOnlineErrorType_MatchStopTimeout" },
				{ "ESSOnlineErrorType_NeedsMasterDataUpdate.Name", "ESSOnlineErrorType::ESSOnlineErrorType_NeedsMasterDataUpdate" },
				{ "ESSOnlineErrorType_NetworkError.Name", "ESSOnlineErrorType::ESSOnlineErrorType_NetworkError" },
				{ "ESSOnlineErrorType_NetworkOffline.Name", "ESSOnlineErrorType::ESSOnlineErrorType_NetworkOffline" },
				{ "ESSOnlineErrorType_None.Name", "ESSOnlineErrorType::ESSOnlineErrorType_None" },
				{ "ESSOnlineErrorType_Offline_NX.Name", "ESSOnlineErrorType::ESSOnlineErrorType_Offline_NX" },
				{ "ESSOnlineErrorType_Offline_PS.Name", "ESSOnlineErrorType::ESSOnlineErrorType_Offline_PS" },
				{ "ESSOnlineErrorType_Offline_XB.Name", "ESSOnlineErrorType::ESSOnlineErrorType_Offline_XB" },
				{ "ESSOnlineErrorType_PlacingTimeout.Name", "ESSOnlineErrorType::ESSOnlineErrorType_PlacingTimeout" },
				{ "ESSOnlineErrorType_ServerConnect.Name", "ESSOnlineErrorType::ESSOnlineErrorType_ServerConnect" },
				{ "ESSOnlineErrorType_SignOut_EOS.Name", "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_EOS" },
				{ "ESSOnlineErrorType_SignOut_NX.Name", "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_NX" },
				{ "ESSOnlineErrorType_SignOut_PS.Name", "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_PS" },
				{ "ESSOnlineErrorType_SignOut_XB.Name", "ESSOnlineErrorType::ESSOnlineErrorType_SignOut_XB" },
				{ "Maintenance.Name", "ESSOnlineErrorType::Maintenance" },
				{ "MaintenanceStart.Name", "ESSOnlineErrorType::MaintenanceStart" },
				{ "ModuleRelativePath", "Public/ESSOnlineErrorType.h" },
				{ "ServiceParamIsNull.Name", "ESSOnlineErrorType::ServiceParamIsNull" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSOnlineErrorType",
				"ESSOnlineErrorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
