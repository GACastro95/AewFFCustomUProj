// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELPlatformErrorID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELPlatformErrorID() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELPlatformErrorID();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELPlatformErrorID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELPlatformErrorID, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELPlatformErrorID"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELPlatformErrorID>()
	{
		return EELPlatformErrorID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELPlatformErrorID(EELPlatformErrorID_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELPlatformErrorID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELPlatformErrorID_Hash() { return 456486870U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELPlatformErrorID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELPlatformErrorID"), 0, Get_Z_Construct_UEnum_ABP_200508_EELPlatformErrorID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELPlatformErrorID::GenericFailure", (int64)EELPlatformErrorID::GenericFailure },
				{ "EELPlatformErrorID::RequiredPatchAvailable", (int64)EELPlatformErrorID::RequiredPatchAvailable },
				{ "EELPlatformErrorID::RequiredSystemUpdate", (int64)EELPlatformErrorID::RequiredSystemUpdate },
				{ "EELPlatformErrorID::AgeRestrictionFailure", (int64)EELPlatformErrorID::AgeRestrictionFailure },
				{ "EELPlatformErrorID::AccountTypeFailure", (int64)EELPlatformErrorID::AccountTypeFailure },
				{ "EELPlatformErrorID::UserNotFound", (int64)EELPlatformErrorID::UserNotFound },
				{ "EELPlatformErrorID::UserNotLoggedIn", (int64)EELPlatformErrorID::UserNotLoggedIn },
				{ "EELPlatformErrorID::ChatRestriction", (int64)EELPlatformErrorID::ChatRestriction },
				{ "EELPlatformErrorID::UGCRestriction", (int64)EELPlatformErrorID::UGCRestriction },
				{ "EELPlatformErrorID::OnlinePlayRestricted", (int64)EELPlatformErrorID::OnlinePlayRestricted },
				{ "EELPlatformErrorID::NetworkConnectionUnavailable", (int64)EELPlatformErrorID::NetworkConnectionUnavailable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccountTypeFailure.Name", "EELPlatformErrorID::AccountTypeFailure" },
				{ "AgeRestrictionFailure.Name", "EELPlatformErrorID::AgeRestrictionFailure" },
				{ "BlueprintType", "true" },
				{ "ChatRestriction.Name", "EELPlatformErrorID::ChatRestriction" },
				{ "GenericFailure.Name", "EELPlatformErrorID::GenericFailure" },
				{ "ModuleRelativePath", "Public/EELPlatformErrorID.h" },
				{ "NetworkConnectionUnavailable.Name", "EELPlatformErrorID::NetworkConnectionUnavailable" },
				{ "OnlinePlayRestricted.Name", "EELPlatformErrorID::OnlinePlayRestricted" },
				{ "RequiredPatchAvailable.Name", "EELPlatformErrorID::RequiredPatchAvailable" },
				{ "RequiredSystemUpdate.Name", "EELPlatformErrorID::RequiredSystemUpdate" },
				{ "UGCRestriction.Name", "EELPlatformErrorID::UGCRestriction" },
				{ "UserNotFound.Name", "EELPlatformErrorID::UserNotFound" },
				{ "UserNotLoggedIn.Name", "EELPlatformErrorID::UserNotLoggedIn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELPlatformErrorID",
				"EELPlatformErrorID",
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
