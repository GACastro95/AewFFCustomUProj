// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionPacketTransfterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionPacketTransfterState() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionPacketTransfterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionPacketTransfterState"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketTransfterState>()
	{
		return EEOSSessionPacketTransfterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionPacketTransfterState(EEOSSessionPacketTransfterState_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionPacketTransfterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState_Hash() { return 914736876U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionPacketTransfterState"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionPacketTransfterState::None", (int64)EEOSSessionPacketTransfterState::None },
				{ "EEOSSessionPacketTransfterState::Sending", (int64)EEOSSessionPacketTransfterState::Sending },
				{ "EEOSSessionPacketTransfterState::Sent", (int64)EEOSSessionPacketTransfterState::Sent },
				{ "EEOSSessionPacketTransfterState::Compare", (int64)EEOSSessionPacketTransfterState::Compare },
				{ "EEOSSessionPacketTransfterState::Compare_Sent", (int64)EEOSSessionPacketTransfterState::Compare_Sent },
				{ "EEOSSessionPacketTransfterState::OW_Sending", (int64)EEOSSessionPacketTransfterState::OW_Sending },
				{ "EEOSSessionPacketTransfterState::OW_Sent", (int64)EEOSSessionPacketTransfterState::OW_Sent },
				{ "EEOSSessionPacketTransfterState::ReceivedResult", (int64)EEOSSessionPacketTransfterState::ReceivedResult },
				{ "EEOSSessionPacketTransfterState::Sent_Result", (int64)EEOSSessionPacketTransfterState::Sent_Result },
				{ "EEOSSessionPacketTransfterState::APIError", (int64)EEOSSessionPacketTransfterState::APIError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "APIError.Name", "EEOSSessionPacketTransfterState::APIError" },
				{ "BlueprintType", "true" },
				{ "Compare.Name", "EEOSSessionPacketTransfterState::Compare" },
				{ "Compare_Sent.Name", "EEOSSessionPacketTransfterState::Compare_Sent" },
				{ "ModuleRelativePath", "Public/EEOSSessionPacketTransfterState.h" },
				{ "None.Name", "EEOSSessionPacketTransfterState::None" },
				{ "OW_Sending.Name", "EEOSSessionPacketTransfterState::OW_Sending" },
				{ "OW_Sent.Name", "EEOSSessionPacketTransfterState::OW_Sent" },
				{ "ReceivedResult.Name", "EEOSSessionPacketTransfterState::ReceivedResult" },
				{ "Sending.Name", "EEOSSessionPacketTransfterState::Sending" },
				{ "Sent.Name", "EEOSSessionPacketTransfterState::Sent" },
				{ "Sent_Result.Name", "EEOSSessionPacketTransfterState::Sent_Result" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionPacketTransfterState",
				"EEOSSessionPacketTransfterState",
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
