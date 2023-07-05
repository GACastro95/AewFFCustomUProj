// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSConnectionClosedReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSConnectionClosedReason() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedReason();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSConnectionClosedReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedReason, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSConnectionClosedReason"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSConnectionClosedReason>()
	{
		return EEOSConnectionClosedReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSConnectionClosedReason(EEOSConnectionClosedReason_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSConnectionClosedReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedReason_Hash() { return 1967481714U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSConnectionClosedReason"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSConnectionClosedReason::Unknown", (int64)EEOSConnectionClosedReason::Unknown },
				{ "EEOSConnectionClosedReason::ClosedByLocalUser", (int64)EEOSConnectionClosedReason::ClosedByLocalUser },
				{ "EEOSConnectionClosedReason::ClosedByPeer", (int64)EEOSConnectionClosedReason::ClosedByPeer },
				{ "EEOSConnectionClosedReason::TimedOut", (int64)EEOSConnectionClosedReason::TimedOut },
				{ "EEOSConnectionClosedReason::TooManyConnections", (int64)EEOSConnectionClosedReason::TooManyConnections },
				{ "EEOSConnectionClosedReason::InvalidMessage", (int64)EEOSConnectionClosedReason::InvalidMessage },
				{ "EEOSConnectionClosedReason::InvalidData", (int64)EEOSConnectionClosedReason::InvalidData },
				{ "EEOSConnectionClosedReason::ConnectionFailed", (int64)EEOSConnectionClosedReason::ConnectionFailed },
				{ "EEOSConnectionClosedReason::ConnectionClosed", (int64)EEOSConnectionClosedReason::ConnectionClosed },
				{ "EEOSConnectionClosedReason::NegotiationFailed", (int64)EEOSConnectionClosedReason::NegotiationFailed },
				{ "EEOSConnectionClosedReason::UnexpectedError", (int64)EEOSConnectionClosedReason::UnexpectedError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClosedByLocalUser.Name", "EEOSConnectionClosedReason::ClosedByLocalUser" },
				{ "ClosedByPeer.Name", "EEOSConnectionClosedReason::ClosedByPeer" },
				{ "ConnectionClosed.Name", "EEOSConnectionClosedReason::ConnectionClosed" },
				{ "ConnectionFailed.Name", "EEOSConnectionClosedReason::ConnectionFailed" },
				{ "InvalidData.Name", "EEOSConnectionClosedReason::InvalidData" },
				{ "InvalidMessage.Name", "EEOSConnectionClosedReason::InvalidMessage" },
				{ "ModuleRelativePath", "Public/EEOSConnectionClosedReason.h" },
				{ "NegotiationFailed.Name", "EEOSConnectionClosedReason::NegotiationFailed" },
				{ "TimedOut.Name", "EEOSConnectionClosedReason::TimedOut" },
				{ "TooManyConnections.Name", "EEOSConnectionClosedReason::TooManyConnections" },
				{ "UnexpectedError.Name", "EEOSConnectionClosedReason::UnexpectedError" },
				{ "Unknown.Name", "EEOSConnectionClosedReason::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSConnectionClosedReason",
				"EEOSConnectionClosedReason",
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
