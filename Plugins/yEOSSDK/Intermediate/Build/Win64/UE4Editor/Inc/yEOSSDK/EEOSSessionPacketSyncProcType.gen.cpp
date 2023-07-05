// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionPacketSyncProcType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionPacketSyncProcType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionPacketSyncProcType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionPacketSyncProcType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketSyncProcType>()
	{
		return EEOSSessionPacketSyncProcType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionPacketSyncProcType(EEOSSessionPacketSyncProcType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionPacketSyncProcType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType_Hash() { return 886816959U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionPacketSyncProcType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionPacketSyncProcType::None", (int64)EEOSSessionPacketSyncProcType::None },
				{ "EEOSSessionPacketSyncProcType::Update_Request", (int64)EEOSSessionPacketSyncProcType::Update_Request },
				{ "EEOSSessionPacketSyncProcType::Update_Success", (int64)EEOSSessionPacketSyncProcType::Update_Success },
				{ "EEOSSessionPacketSyncProcType::Update_Failed", (int64)EEOSSessionPacketSyncProcType::Update_Failed },
				{ "EEOSSessionPacketSyncProcType::Compare_Request", (int64)EEOSSessionPacketSyncProcType::Compare_Request },
				{ "EEOSSessionPacketSyncProcType::Compare_Request_Sync", (int64)EEOSSessionPacketSyncProcType::Compare_Request_Sync },
				{ "EEOSSessionPacketSyncProcType::Compare_Success", (int64)EEOSSessionPacketSyncProcType::Compare_Success },
				{ "EEOSSessionPacketSyncProcType::Compare_Failed", (int64)EEOSSessionPacketSyncProcType::Compare_Failed },
				{ "EEOSSessionPacketSyncProcType::Overwrite_Request", (int64)EEOSSessionPacketSyncProcType::Overwrite_Request },
				{ "EEOSSessionPacketSyncProcType::Overwrite_Success", (int64)EEOSSessionPacketSyncProcType::Overwrite_Success },
				{ "EEOSSessionPacketSyncProcType::Overwrite_Failed", (int64)EEOSSessionPacketSyncProcType::Overwrite_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Compare_Failed.Name", "EEOSSessionPacketSyncProcType::Compare_Failed" },
				{ "Compare_Request.Name", "EEOSSessionPacketSyncProcType::Compare_Request" },
				{ "Compare_Request_Sync.Name", "EEOSSessionPacketSyncProcType::Compare_Request_Sync" },
				{ "Compare_Success.Name", "EEOSSessionPacketSyncProcType::Compare_Success" },
				{ "ModuleRelativePath", "Public/EEOSSessionPacketSyncProcType.h" },
				{ "None.Name", "EEOSSessionPacketSyncProcType::None" },
				{ "Overwrite_Failed.Name", "EEOSSessionPacketSyncProcType::Overwrite_Failed" },
				{ "Overwrite_Request.Name", "EEOSSessionPacketSyncProcType::Overwrite_Request" },
				{ "Overwrite_Success.Name", "EEOSSessionPacketSyncProcType::Overwrite_Success" },
				{ "Update_Failed.Name", "EEOSSessionPacketSyncProcType::Update_Failed" },
				{ "Update_Request.Name", "EEOSSessionPacketSyncProcType::Update_Request" },
				{ "Update_Success.Name", "EEOSSessionPacketSyncProcType::Update_Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionPacketSyncProcType",
				"EEOSSessionPacketSyncProcType",
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
