// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSConnectionClosedExternalReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSConnectionClosedExternalReason() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedExternalReason();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSConnectionClosedExternalReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedExternalReason, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSConnectionClosedExternalReason"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSConnectionClosedExternalReason>()
	{
		return EEOSConnectionClosedExternalReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSConnectionClosedExternalReason(EEOSConnectionClosedExternalReason_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSConnectionClosedExternalReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedExternalReason_Hash() { return 865200950U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedExternalReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSConnectionClosedExternalReason"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSConnectionClosedExternalReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSConnectionClosedExternalReason::None", (int64)EEOSConnectionClosedExternalReason::None },
				{ "EEOSConnectionClosedExternalReason::Blocked", (int64)EEOSConnectionClosedExternalReason::Blocked },
				{ "EEOSConnectionClosedExternalReason::SessionFull", (int64)EEOSConnectionClosedExternalReason::SessionFull },
				{ "EEOSConnectionClosedExternalReason::SessionAlreadyStarted", (int64)EEOSConnectionClosedExternalReason::SessionAlreadyStarted },
				{ "EEOSConnectionClosedExternalReason::SessionAlreadyEnded", (int64)EEOSConnectionClosedExternalReason::SessionAlreadyEnded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blocked.Name", "EEOSConnectionClosedExternalReason::Blocked" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSConnectionClosedExternalReason.h" },
				{ "None.Name", "EEOSConnectionClosedExternalReason::None" },
				{ "SessionAlreadyEnded.Name", "EEOSConnectionClosedExternalReason::SessionAlreadyEnded" },
				{ "SessionAlreadyStarted.Name", "EEOSConnectionClosedExternalReason::SessionAlreadyStarted" },
				{ "SessionFull.Name", "EEOSConnectionClosedExternalReason::SessionFull" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSConnectionClosedExternalReason",
				"EEOSConnectionClosedExternalReason",
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
