// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAntiCheatClientPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAntiCheatClientPlatform() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientPlatform();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAntiCheatClientPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientPlatform, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAntiCheatClientPlatform"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatClientPlatform>()
	{
		return EEOSAntiCheatClientPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAntiCheatClientPlatform(EEOSAntiCheatClientPlatform_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAntiCheatClientPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientPlatform_Hash() { return 322650062U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAntiCheatClientPlatform"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAntiCheatClientPlatform::Unknown", (int64)EEOSAntiCheatClientPlatform::Unknown },
				{ "EEOSAntiCheatClientPlatform::Windows", (int64)EEOSAntiCheatClientPlatform::Windows },
				{ "EEOSAntiCheatClientPlatform::Mac", (int64)EEOSAntiCheatClientPlatform::Mac },
				{ "EEOSAntiCheatClientPlatform::Linux", (int64)EEOSAntiCheatClientPlatform::Linux },
				{ "EEOSAntiCheatClientPlatform::Xbox", (int64)EEOSAntiCheatClientPlatform::Xbox },
				{ "EEOSAntiCheatClientPlatform::Playstation", (int64)EEOSAntiCheatClientPlatform::Playstation },
				{ "EEOSAntiCheatClientPlatform::Nintendo", (int64)EEOSAntiCheatClientPlatform::Nintendo },
				{ "EEOSAntiCheatClientPlatform::iOS", (int64)EEOSAntiCheatClientPlatform::iOS },
				{ "EEOSAntiCheatClientPlatform::Android", (int64)EEOSAntiCheatClientPlatform::Android },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Android.Name", "EEOSAntiCheatClientPlatform::Android" },
				{ "BlueprintType", "true" },
				{ "iOS.Name", "EEOSAntiCheatClientPlatform::iOS" },
				{ "Linux.Name", "EEOSAntiCheatClientPlatform::Linux" },
				{ "Mac.Name", "EEOSAntiCheatClientPlatform::Mac" },
				{ "ModuleRelativePath", "Public/EEOSAntiCheatClientPlatform.h" },
				{ "Nintendo.Name", "EEOSAntiCheatClientPlatform::Nintendo" },
				{ "Playstation.Name", "EEOSAntiCheatClientPlatform::Playstation" },
				{ "Unknown.Name", "EEOSAntiCheatClientPlatform::Unknown" },
				{ "Windows.Name", "EEOSAntiCheatClientPlatform::Windows" },
				{ "Xbox.Name", "EEOSAntiCheatClientPlatform::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAntiCheatClientPlatform",
				"EEOSAntiCheatClientPlatform",
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
