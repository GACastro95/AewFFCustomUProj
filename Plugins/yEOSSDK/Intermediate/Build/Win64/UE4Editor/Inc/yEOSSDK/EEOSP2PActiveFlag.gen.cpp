// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSP2PActiveFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSP2PActiveFlag() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSP2PActiveFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSP2PActiveFlag"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSP2PActiveFlag>()
	{
		return EEOSP2PActiveFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSP2PActiveFlag(EEOSP2PActiveFlag_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSP2PActiveFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag_Hash() { return 3517191028U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSP2PActiveFlag"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSP2PActiveFlag::Invalid", (int64)EEOSP2PActiveFlag::Invalid },
				{ "EEOSP2PActiveFlag::None", (int64)EEOSP2PActiveFlag::None },
				{ "EEOSP2PActiveFlag::Activated", (int64)EEOSP2PActiveFlag::Activated },
				{ "EEOSP2PActiveFlag::Deactivated", (int64)EEOSP2PActiveFlag::Deactivated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activated.Name", "EEOSP2PActiveFlag::Activated" },
				{ "BlueprintType", "true" },
				{ "Deactivated.Name", "EEOSP2PActiveFlag::Deactivated" },
				{ "Invalid.Name", "EEOSP2PActiveFlag::Invalid" },
				{ "ModuleRelativePath", "Public/EEOSP2PActiveFlag.h" },
				{ "None.Name", "EEOSP2PActiveFlag::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSP2PActiveFlag",
				"EEOSP2PActiveFlag",
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
