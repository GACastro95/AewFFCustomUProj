// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSEventType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSEventType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSEventType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSEventType>()
	{
		return EELEOSEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSEventType(EELEOSEventType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSEventType_Hash() { return 1542802977U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSEventType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSEventType::Login", (int64)EELEOSEventType::Login },
				{ "EELEOSEventType::Logout", (int64)EELEOSEventType::Logout },
				{ "EELEOSEventType::UpdateUserInfo", (int64)EELEOSEventType::UpdateUserInfo },
				{ "EELEOSEventType::UpdateFriendUserInfo", (int64)EELEOSEventType::UpdateFriendUserInfo },
				{ "EELEOSEventType::NoConnection", (int64)EELEOSEventType::NoConnection },
				{ "EELEOSEventType::UnexpectedError", (int64)EELEOSEventType::UnexpectedError },
				{ "EELEOSEventType::RequestLogout", (int64)EELEOSEventType::RequestLogout },
				{ "EELEOSEventType::InvalidLinkedUser", (int64)EELEOSEventType::InvalidLinkedUser },
				{ "EELEOSEventType::LinkEpicAccount", (int64)EELEOSEventType::LinkEpicAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InvalidLinkedUser.Name", "EELEOSEventType::InvalidLinkedUser" },
				{ "LinkEpicAccount.Name", "EELEOSEventType::LinkEpicAccount" },
				{ "Login.Name", "EELEOSEventType::Login" },
				{ "Logout.Name", "EELEOSEventType::Logout" },
				{ "ModuleRelativePath", "Public/EELEOSEventType.h" },
				{ "NoConnection.Name", "EELEOSEventType::NoConnection" },
				{ "RequestLogout.Name", "EELEOSEventType::RequestLogout" },
				{ "UnexpectedError.Name", "EELEOSEventType::UnexpectedError" },
				{ "UpdateFriendUserInfo.Name", "EELEOSEventType::UpdateFriendUserInfo" },
				{ "UpdateUserInfo.Name", "EELEOSEventType::UpdateUserInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSEventType",
				"EELEOSEventType",
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
