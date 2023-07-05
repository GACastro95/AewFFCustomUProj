// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAutoCreationSessionP2PType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAutoCreationSessionP2PType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAutoCreationSessionP2PType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAutoCreationSessionP2PType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAutoCreationSessionP2PType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAutoCreationSessionP2PType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAutoCreationSessionP2PType>()
	{
		return EEOSAutoCreationSessionP2PType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAutoCreationSessionP2PType(EEOSAutoCreationSessionP2PType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAutoCreationSessionP2PType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAutoCreationSessionP2PType_Hash() { return 162849236U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAutoCreationSessionP2PType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAutoCreationSessionP2PType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAutoCreationSessionP2PType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAutoCreationSessionP2PType::NoUsed", (int64)EEOSAutoCreationSessionP2PType::NoUsed },
				{ "EEOSAutoCreationSessionP2PType::GenerarSessionP2P", (int64)EEOSAutoCreationSessionP2PType::GenerarSessionP2P },
				{ "EEOSAutoCreationSessionP2PType::WithGameFlowManager", (int64)EEOSAutoCreationSessionP2PType::WithGameFlowManager },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GenerarSessionP2P.Name", "EEOSAutoCreationSessionP2PType::GenerarSessionP2P" },
				{ "ModuleRelativePath", "Public/EEOSAutoCreationSessionP2PType.h" },
				{ "NoUsed.Name", "EEOSAutoCreationSessionP2PType::NoUsed" },
				{ "WithGameFlowManager.Name", "EEOSAutoCreationSessionP2PType::WithGameFlowManager" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAutoCreationSessionP2PType",
				"EEOSAutoCreationSessionP2PType",
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
