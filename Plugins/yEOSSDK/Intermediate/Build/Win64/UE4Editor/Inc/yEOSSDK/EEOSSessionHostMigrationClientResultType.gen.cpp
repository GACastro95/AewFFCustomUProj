// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionHostMigrationClientResultType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionHostMigrationClientResultType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionHostMigrationClientResultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionHostMigrationClientResultType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationClientResultType>()
	{
		return EEOSSessionHostMigrationClientResultType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionHostMigrationClientResultType(EEOSSessionHostMigrationClientResultType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionHostMigrationClientResultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType_Hash() { return 3508051192U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionHostMigrationClientResultType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionHostMigrationClientResultType::None", (int64)EEOSSessionHostMigrationClientResultType::None },
				{ "EEOSSessionHostMigrationClientResultType::LeaveSession", (int64)EEOSSessionHostMigrationClientResultType::LeaveSession },
				{ "EEOSSessionHostMigrationClientResultType::LeaveSessionErr", (int64)EEOSSessionHostMigrationClientResultType::LeaveSessionErr },
				{ "EEOSSessionHostMigrationClientResultType::WaitInvite", (int64)EEOSSessionHostMigrationClientResultType::WaitInvite },
				{ "EEOSSessionHostMigrationClientResultType::WaitInviteErr", (int64)EEOSSessionHostMigrationClientResultType::WaitInviteErr },
				{ "EEOSSessionHostMigrationClientResultType::JoinSession", (int64)EEOSSessionHostMigrationClientResultType::JoinSession },
				{ "EEOSSessionHostMigrationClientResultType::JoinSessionErr", (int64)EEOSSessionHostMigrationClientResultType::JoinSessionErr },
				{ "EEOSSessionHostMigrationClientResultType::WaitMemberInfo", (int64)EEOSSessionHostMigrationClientResultType::WaitMemberInfo },
				{ "EEOSSessionHostMigrationClientResultType::WaitMemberInfoErr", (int64)EEOSSessionHostMigrationClientResultType::WaitMemberInfoErr },
				{ "EEOSSessionHostMigrationClientResultType::WaitConnection", (int64)EEOSSessionHostMigrationClientResultType::WaitConnection },
				{ "EEOSSessionHostMigrationClientResultType::WaitConnectionErr", (int64)EEOSSessionHostMigrationClientResultType::WaitConnectionErr },
				{ "EEOSSessionHostMigrationClientResultType::WaitExchangeData", (int64)EEOSSessionHostMigrationClientResultType::WaitExchangeData },
				{ "EEOSSessionHostMigrationClientResultType::WaitExchangeDataErr", (int64)EEOSSessionHostMigrationClientResultType::WaitExchangeDataErr },
				{ "EEOSSessionHostMigrationClientResultType::EndOfExchangeData", (int64)EEOSSessionHostMigrationClientResultType::EndOfExchangeData },
				{ "EEOSSessionHostMigrationClientResultType::EndOfExchangeDataErr", (int64)EEOSSessionHostMigrationClientResultType::EndOfExchangeDataErr },
				{ "EEOSSessionHostMigrationClientResultType::ReceivedFixed", (int64)EEOSSessionHostMigrationClientResultType::ReceivedFixed },
				{ "EEOSSessionHostMigrationClientResultType::ForceReset", (int64)EEOSSessionHostMigrationClientResultType::ForceReset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EndOfExchangeData.Name", "EEOSSessionHostMigrationClientResultType::EndOfExchangeData" },
				{ "EndOfExchangeDataErr.Name", "EEOSSessionHostMigrationClientResultType::EndOfExchangeDataErr" },
				{ "ForceReset.Name", "EEOSSessionHostMigrationClientResultType::ForceReset" },
				{ "JoinSession.Name", "EEOSSessionHostMigrationClientResultType::JoinSession" },
				{ "JoinSessionErr.Name", "EEOSSessionHostMigrationClientResultType::JoinSessionErr" },
				{ "LeaveSession.Name", "EEOSSessionHostMigrationClientResultType::LeaveSession" },
				{ "LeaveSessionErr.Name", "EEOSSessionHostMigrationClientResultType::LeaveSessionErr" },
				{ "ModuleRelativePath", "Public/EEOSSessionHostMigrationClientResultType.h" },
				{ "None.Name", "EEOSSessionHostMigrationClientResultType::None" },
				{ "ReceivedFixed.Name", "EEOSSessionHostMigrationClientResultType::ReceivedFixed" },
				{ "WaitConnection.Name", "EEOSSessionHostMigrationClientResultType::WaitConnection" },
				{ "WaitConnectionErr.Name", "EEOSSessionHostMigrationClientResultType::WaitConnectionErr" },
				{ "WaitExchangeData.Name", "EEOSSessionHostMigrationClientResultType::WaitExchangeData" },
				{ "WaitExchangeDataErr.Name", "EEOSSessionHostMigrationClientResultType::WaitExchangeDataErr" },
				{ "WaitInvite.Name", "EEOSSessionHostMigrationClientResultType::WaitInvite" },
				{ "WaitInviteErr.Name", "EEOSSessionHostMigrationClientResultType::WaitInviteErr" },
				{ "WaitMemberInfo.Name", "EEOSSessionHostMigrationClientResultType::WaitMemberInfo" },
				{ "WaitMemberInfoErr.Name", "EEOSSessionHostMigrationClientResultType::WaitMemberInfoErr" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionHostMigrationClientResultType",
				"EEOSSessionHostMigrationClientResultType",
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
