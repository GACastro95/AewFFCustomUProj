// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionState() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionState();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionState, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionState"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionState>()
	{
		return EEOSSessionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionState(EEOSSessionState_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionState_Hash() { return 3829151738U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionState"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionState::None", (int64)EEOSSessionState::None },
				{ "EEOSSessionState::Creating", (int64)EEOSSessionState::Creating },
				{ "EEOSSessionState::Pending", (int64)EEOSSessionState::Pending },
				{ "EEOSSessionState::Starting", (int64)EEOSSessionState::Starting },
				{ "EEOSSessionState::InProgress", (int64)EEOSSessionState::InProgress },
				{ "EEOSSessionState::Ending", (int64)EEOSSessionState::Ending },
				{ "EEOSSessionState::Ended", (int64)EEOSSessionState::Ended },
				{ "EEOSSessionState::Destroying", (int64)EEOSSessionState::Destroying },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Creating.Name", "EEOSSessionState::Creating" },
				{ "Destroying.Name", "EEOSSessionState::Destroying" },
				{ "Ended.Name", "EEOSSessionState::Ended" },
				{ "Ending.Name", "EEOSSessionState::Ending" },
				{ "InProgress.Name", "EEOSSessionState::InProgress" },
				{ "ModuleRelativePath", "Public/EEOSSessionState.h" },
				{ "None.Name", "EEOSSessionState::None" },
				{ "Pending.Name", "EEOSSessionState::Pending" },
				{ "Starting.Name", "EEOSSessionState::Starting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionState",
				"EEOSSessionState",
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
