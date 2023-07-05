// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSFriendGetInfoBit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSFriendGetInfoBit() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendGetInfoBit();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSFriendGetInfoBit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSFriendGetInfoBit, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSFriendGetInfoBit"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendGetInfoBit>()
	{
		return EEOSFriendGetInfoBit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSFriendGetInfoBit(EEOSFriendGetInfoBit_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSFriendGetInfoBit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendGetInfoBit_Hash() { return 3067339338U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendGetInfoBit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSFriendGetInfoBit"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendGetInfoBit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSFriendGetInfoBit::None", (int64)EEOSFriendGetInfoBit::None },
				{ "EEOSFriendGetInfoBit::UserInfo", (int64)EEOSFriendGetInfoBit::UserInfo },
				{ "EEOSFriendGetInfoBit::Presence", (int64)EEOSFriendGetInfoBit::Presence },
				{ "EEOSFriendGetInfoBit::ALL", (int64)EEOSFriendGetInfoBit::ALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.Name", "EEOSFriendGetInfoBit::ALL" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSFriendGetInfoBit.h" },
				{ "None.Name", "EEOSFriendGetInfoBit::None" },
				{ "Presence.Name", "EEOSFriendGetInfoBit::Presence" },
				{ "UserInfo.Name", "EEOSFriendGetInfoBit::UserInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSFriendGetInfoBit",
				"EEOSFriendGetInfoBit",
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
