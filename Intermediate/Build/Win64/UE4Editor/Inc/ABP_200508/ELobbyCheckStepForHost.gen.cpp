// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELobbyCheckStepForHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyCheckStepForHost() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyCheckStepForHost();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELobbyCheckStepForHost_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELobbyCheckStepForHost, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELobbyCheckStepForHost"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELobbyCheckStepForHost>()
	{
		return ELobbyCheckStepForHost_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyCheckStepForHost(ELobbyCheckStepForHost_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELobbyCheckStepForHost"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELobbyCheckStepForHost_Hash() { return 1982137819U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELobbyCheckStepForHost()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyCheckStepForHost"), 0, Get_Z_Construct_UEnum_ABP_200508_ELobbyCheckStepForHost_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyCheckStepForHost::None", (int64)ELobbyCheckStepForHost::None },
				{ "ELobbyCheckStepForHost::MemberJoined", (int64)ELobbyCheckStepForHost::MemberJoined },
				{ "ELobbyCheckStepForHost::MemberUpdatedAfterMemberJoined", (int64)ELobbyCheckStepForHost::MemberUpdatedAfterMemberJoined },
				{ "ELobbyCheckStepForHost::Callback", (int64)ELobbyCheckStepForHost::Callback },
				{ "ELobbyCheckStepForHost::CallbackAfterMemberJoined", (int64)ELobbyCheckStepForHost::CallbackAfterMemberJoined },
				{ "ELobbyCheckStepForHost::Canceled_AccountType", (int64)ELobbyCheckStepForHost::Canceled_AccountType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Callback.Name", "ELobbyCheckStepForHost::Callback" },
				{ "CallbackAfterMemberJoined.Name", "ELobbyCheckStepForHost::CallbackAfterMemberJoined" },
				{ "Canceled_AccountType.Name", "ELobbyCheckStepForHost::Canceled_AccountType" },
				{ "MemberJoined.Name", "ELobbyCheckStepForHost::MemberJoined" },
				{ "MemberUpdatedAfterMemberJoined.Name", "ELobbyCheckStepForHost::MemberUpdatedAfterMemberJoined" },
				{ "ModuleRelativePath", "Public/ELobbyCheckStepForHost.h" },
				{ "None.Name", "ELobbyCheckStepForHost::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELobbyCheckStepForHost",
				"ELobbyCheckStepForHost",
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
