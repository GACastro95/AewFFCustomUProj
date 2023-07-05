// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2ErrorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2ErrorType() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2ErrorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2ErrorType"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2ErrorType>()
	{
		return EYGS2ErrorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2ErrorType(EYGS2ErrorType_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2ErrorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2ErrorType_Hash() { return 4276404801U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2ErrorType"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2ErrorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2ErrorType::NoRequest", (int64)EYGS2ErrorType::NoRequest },
				{ "EYGS2ErrorType::Requesting", (int64)EYGS2ErrorType::Requesting },
				{ "EYGS2ErrorType::Processing", (int64)EYGS2ErrorType::Processing },
				{ "EYGS2ErrorType::Retrying", (int64)EYGS2ErrorType::Retrying },
				{ "EYGS2ErrorType::Canceling", (int64)EYGS2ErrorType::Canceling },
				{ "EYGS2ErrorType::Analyzing", (int64)EYGS2ErrorType::Analyzing },
				{ "EYGS2ErrorType::Responed", (int64)EYGS2ErrorType::Responed },
				{ "EYGS2ErrorType::ServerDown", (int64)EYGS2ErrorType::ServerDown },
				{ "EYGS2ErrorType::Maintenance", (int64)EYGS2ErrorType::Maintenance },
				{ "EYGS2ErrorType::WrongRequest", (int64)EYGS2ErrorType::WrongRequest },
				{ "EYGS2ErrorType::AccessDenied", (int64)EYGS2ErrorType::AccessDenied },
				{ "EYGS2ErrorType::NeedAuth", (int64)EYGS2ErrorType::NeedAuth },
				{ "EYGS2ErrorType::NeedRetryAuth", (int64)EYGS2ErrorType::NeedRetryAuth },
				{ "EYGS2ErrorType::WrongEnvironment", (int64)EYGS2ErrorType::WrongEnvironment },
				{ "EYGS2ErrorType::WrongApplication", (int64)EYGS2ErrorType::WrongApplication },
				{ "EYGS2ErrorType::WrongVersion", (int64)EYGS2ErrorType::WrongVersion },
				{ "EYGS2ErrorType::WrongApiVersion", (int64)EYGS2ErrorType::WrongApiVersion },
				{ "EYGS2ErrorType::NeedRegisterUser", (int64)EYGS2ErrorType::NeedRegisterUser },
				{ "EYGS2ErrorType::AlreadyRegisterd", (int64)EYGS2ErrorType::AlreadyRegisterd },
				{ "EYGS2ErrorType::NotFoundUser", (int64)EYGS2ErrorType::NotFoundUser },
				{ "EYGS2ErrorType::Conflict", (int64)EYGS2ErrorType::Conflict },
				{ "EYGS2ErrorType::InsufficentServerResource", (int64)EYGS2ErrorType::InsufficentServerResource },
				{ "EYGS2ErrorType::WrongInputData", (int64)EYGS2ErrorType::WrongInputData },
				{ "EYGS2ErrorType::NotFoundData", (int64)EYGS2ErrorType::NotFoundData },
				{ "EYGS2ErrorType::DuplicatedData", (int64)EYGS2ErrorType::DuplicatedData },
				{ "EYGS2ErrorType::DenyClient", (int64)EYGS2ErrorType::DenyClient },
				{ "EYGS2ErrorType::DataBroken", (int64)EYGS2ErrorType::DataBroken },
				{ "EYGS2ErrorType::NetworkError", (int64)EYGS2ErrorType::NetworkError },
				{ "EYGS2ErrorType::ServerScriptError", (int64)EYGS2ErrorType::ServerScriptError },
				{ "EYGS2ErrorType::InternalError", (int64)EYGS2ErrorType::InternalError },
				{ "EYGS2ErrorType::FatalError", (int64)EYGS2ErrorType::FatalError },
				{ "EYGS2ErrorType::EndRequest", (int64)EYGS2ErrorType::EndRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccessDenied.Name", "EYGS2ErrorType::AccessDenied" },
				{ "AlreadyRegisterd.Name", "EYGS2ErrorType::AlreadyRegisterd" },
				{ "Analyzing.Name", "EYGS2ErrorType::Analyzing" },
				{ "BlueprintType", "true" },
				{ "Canceling.Name", "EYGS2ErrorType::Canceling" },
				{ "Conflict.Name", "EYGS2ErrorType::Conflict" },
				{ "DataBroken.Name", "EYGS2ErrorType::DataBroken" },
				{ "DenyClient.Name", "EYGS2ErrorType::DenyClient" },
				{ "DuplicatedData.Name", "EYGS2ErrorType::DuplicatedData" },
				{ "EndRequest.Name", "EYGS2ErrorType::EndRequest" },
				{ "FatalError.Name", "EYGS2ErrorType::FatalError" },
				{ "InsufficentServerResource.Name", "EYGS2ErrorType::InsufficentServerResource" },
				{ "InternalError.Name", "EYGS2ErrorType::InternalError" },
				{ "Maintenance.Name", "EYGS2ErrorType::Maintenance" },
				{ "ModuleRelativePath", "Public/EYGS2ErrorType.h" },
				{ "NeedAuth.Name", "EYGS2ErrorType::NeedAuth" },
				{ "NeedRegisterUser.Name", "EYGS2ErrorType::NeedRegisterUser" },
				{ "NeedRetryAuth.Name", "EYGS2ErrorType::NeedRetryAuth" },
				{ "NetworkError.Name", "EYGS2ErrorType::NetworkError" },
				{ "NoRequest.Name", "EYGS2ErrorType::NoRequest" },
				{ "NotFoundData.Name", "EYGS2ErrorType::NotFoundData" },
				{ "NotFoundUser.Name", "EYGS2ErrorType::NotFoundUser" },
				{ "Processing.Name", "EYGS2ErrorType::Processing" },
				{ "Requesting.Name", "EYGS2ErrorType::Requesting" },
				{ "Responed.Name", "EYGS2ErrorType::Responed" },
				{ "Retrying.Name", "EYGS2ErrorType::Retrying" },
				{ "ServerDown.Name", "EYGS2ErrorType::ServerDown" },
				{ "ServerScriptError.Name", "EYGS2ErrorType::ServerScriptError" },
				{ "WrongApiVersion.Name", "EYGS2ErrorType::WrongApiVersion" },
				{ "WrongApplication.Name", "EYGS2ErrorType::WrongApplication" },
				{ "WrongEnvironment.Name", "EYGS2ErrorType::WrongEnvironment" },
				{ "WrongInputData.Name", "EYGS2ErrorType::WrongInputData" },
				{ "WrongRequest.Name", "EYGS2ErrorType::WrongRequest" },
				{ "WrongVersion.Name", "EYGS2ErrorType::WrongVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2ErrorType",
				"EYGS2ErrorType",
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
