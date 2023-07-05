// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSUpdateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSUpdateType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUpdateType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSUpdateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSUpdateType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSUpdateType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSUpdateType>()
	{
		return EEOSUpdateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSUpdateType(EEOSUpdateType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSUpdateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSUpdateType_Hash() { return 1191865058U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUpdateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSUpdateType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSUpdateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSUpdateType::Manual", (int64)EEOSUpdateType::Manual },
				{ "EEOSUpdateType::Tick", (int64)EEOSUpdateType::Tick },
				{ "EEOSUpdateType::BackThread", (int64)EEOSUpdateType::BackThread },
				{ "EEOSUpdateType::BackThreadNoSync", (int64)EEOSUpdateType::BackThreadNoSync },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackThread.Name", "EEOSUpdateType::BackThread" },
				{ "BackThreadNoSync.Name", "EEOSUpdateType::BackThreadNoSync" },
				{ "BlueprintType", "true" },
				{ "Manual.Name", "EEOSUpdateType::Manual" },
				{ "ModuleRelativePath", "Public/EEOSUpdateType.h" },
				{ "Tick.Name", "EEOSUpdateType::Tick" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSUpdateType",
				"EEOSUpdateType",
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
