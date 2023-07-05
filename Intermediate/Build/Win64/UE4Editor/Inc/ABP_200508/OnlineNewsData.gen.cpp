// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/OnlineNewsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineNewsData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UOnlineNewsData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UOnlineNewsData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineNewsData::execFromJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__JsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FromJson(Z_Param__JsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetBodyText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBodyText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetDisplayPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDisplayPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetHeaderText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeaderText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetOnlineNewsID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOnlineNewsID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetOnlineNewsTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetOnlineNewsTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetOnlineNewsVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOnlineNewsVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetPublicationEndDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPublicationEndDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execGetPublicationStartDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPublicationStartDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__FilePath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__Filedata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineNewsData::LoadFile(Z_Param__FilePath,Z_Param_Out__Filedata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execSaveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Text);
		P_GET_PROPERTY(FStrProperty,Z_Param__FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineNewsData::SaveFile(Z_Param__Text,Z_Param__FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execSetEndTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndTime(Z_Param__time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execSetOnlineNewsID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineNewsID(Z_Param__id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execSetOnlineNewsTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param__Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineNewsTexture(Z_Param__Image);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execSetStartTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartTime(Z_Param__time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineNewsData::execToJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToJson();
		P_NATIVE_END;
	}
	void UOnlineNewsData::StaticRegisterNativesUOnlineNewsData()
	{
		UClass* Class = UOnlineNewsData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FromJson", &UOnlineNewsData::execFromJson },
			{ "GetBodyText", &UOnlineNewsData::execGetBodyText },
			{ "GetDisplayPriority", &UOnlineNewsData::execGetDisplayPriority },
			{ "GetHeaderText", &UOnlineNewsData::execGetHeaderText },
			{ "GetOnlineNewsID", &UOnlineNewsData::execGetOnlineNewsID },
			{ "GetOnlineNewsTexture", &UOnlineNewsData::execGetOnlineNewsTexture },
			{ "GetOnlineNewsVersion", &UOnlineNewsData::execGetOnlineNewsVersion },
			{ "GetPublicationEndDate", &UOnlineNewsData::execGetPublicationEndDate },
			{ "GetPublicationStartDate", &UOnlineNewsData::execGetPublicationStartDate },
			{ "LoadFile", &UOnlineNewsData::execLoadFile },
			{ "SaveFile", &UOnlineNewsData::execSaveFile },
			{ "SetEndTime", &UOnlineNewsData::execSetEndTime },
			{ "SetOnlineNewsID", &UOnlineNewsData::execSetOnlineNewsID },
			{ "SetOnlineNewsTexture", &UOnlineNewsData::execSetOnlineNewsTexture },
			{ "SetStartTime", &UOnlineNewsData::execSetStartTime },
			{ "ToJson", &UOnlineNewsData::execToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics
	{
		struct OnlineNewsData_eventFromJson_Parms
		{
			FString _JsonData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::NewProp__JsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::NewProp__JsonData = { "_JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventFromJson_Parms, _JsonData), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::NewProp__JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::NewProp__JsonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::NewProp__JsonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "FromJson", nullptr, nullptr, sizeof(OnlineNewsData_eventFromJson_Parms), Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_FromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_FromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics
	{
		struct OnlineNewsData_eventGetBodyText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetBodyText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetBodyText", nullptr, nullptr, sizeof(OnlineNewsData_eventGetBodyText_Parms), Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetBodyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetBodyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics
	{
		struct OnlineNewsData_eventGetDisplayPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetDisplayPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetDisplayPriority", nullptr, nullptr, sizeof(OnlineNewsData_eventGetDisplayPriority_Parms), Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics
	{
		struct OnlineNewsData_eventGetHeaderText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetHeaderText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetHeaderText", nullptr, nullptr, sizeof(OnlineNewsData_eventGetHeaderText_Parms), Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetHeaderText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetHeaderText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics
	{
		struct OnlineNewsData_eventGetOnlineNewsID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetOnlineNewsID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetOnlineNewsID", nullptr, nullptr, sizeof(OnlineNewsData_eventGetOnlineNewsID_Parms), Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics
	{
		struct OnlineNewsData_eventGetOnlineNewsTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetOnlineNewsTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetOnlineNewsTexture", nullptr, nullptr, sizeof(OnlineNewsData_eventGetOnlineNewsTexture_Parms), Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics
	{
		struct OnlineNewsData_eventGetOnlineNewsVersion_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetOnlineNewsVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetOnlineNewsVersion", nullptr, nullptr, sizeof(OnlineNewsData_eventGetOnlineNewsVersion_Parms), Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics
	{
		struct OnlineNewsData_eventGetPublicationEndDate_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetPublicationEndDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetPublicationEndDate", nullptr, nullptr, sizeof(OnlineNewsData_eventGetPublicationEndDate_Parms), Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics
	{
		struct OnlineNewsData_eventGetPublicationStartDate_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventGetPublicationStartDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "GetPublicationStartDate", nullptr, nullptr, sizeof(OnlineNewsData_eventGetPublicationStartDate_Parms), Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics
	{
		struct OnlineNewsData_eventLoadFile_Parms
		{
			FString _FilePath;
			FString _Filedata;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Filedata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__FilePath = { "_FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventLoadFile_Parms, _FilePath), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__FilePath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__Filedata = { "_Filedata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventLoadFile_Parms, _Filedata), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineNewsData_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlineNewsData_eventLoadFile_Parms), &Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp__Filedata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "LoadFile", nullptr, nullptr, sizeof(OnlineNewsData_eventLoadFile_Parms), Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics
	{
		struct OnlineNewsData_eventSaveFile_Parms
		{
			FString _Text;
			FString _FilePath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__Text = { "_Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSaveFile_Parms, _Text), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__FilePath = { "_FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSaveFile_Parms, _FilePath), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::NewProp__FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "SaveFile", nullptr, nullptr, sizeof(OnlineNewsData_eventSaveFile_Parms), Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_SaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_SaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics
	{
		struct OnlineNewsData_eventSetEndTime_Parms
		{
			FString _time;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::NewProp__time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSetEndTime_Parms, _time), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::NewProp__time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::NewProp__time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::NewProp__time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "SetEndTime", nullptr, nullptr, sizeof(OnlineNewsData_eventSetEndTime_Parms), Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_SetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_SetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics
	{
		struct OnlineNewsData_eventSetOnlineNewsID_Parms
		{
			FString _id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::NewProp__id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSetOnlineNewsID_Parms, _id), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::NewProp__id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::NewProp__id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::NewProp__id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "SetOnlineNewsID", nullptr, nullptr, sizeof(OnlineNewsData_eventSetOnlineNewsID_Parms), Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics
	{
		struct OnlineNewsData_eventSetOnlineNewsTexture_Parms
		{
			UTexture2D* _Image;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::NewProp__Image = { "_Image", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSetOnlineNewsTexture_Parms, _Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::NewProp__Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "SetOnlineNewsTexture", nullptr, nullptr, sizeof(OnlineNewsData_eventSetOnlineNewsTexture_Parms), Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics
	{
		struct OnlineNewsData_eventSetStartTime_Parms
		{
			FString _time;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::NewProp__time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventSetStartTime_Parms, _time), METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::NewProp__time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::NewProp__time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::NewProp__time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "SetStartTime", nullptr, nullptr, sizeof(OnlineNewsData_eventSetStartTime_Parms), Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_SetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_SetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics
	{
		struct OnlineNewsData_eventToJson_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineNewsData_eventToJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineNewsData, nullptr, "ToJson", nullptr, nullptr, sizeof(OnlineNewsData_eventToJson_Parms), Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineNewsData_ToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineNewsData_ToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineNewsData_NoRegister()
	{
		return UOnlineNewsData::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineNewsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineNewsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlineNewsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineNewsTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineNewsTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BodyText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineNewsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineNewsData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineNewsData_FromJson, "FromJson" }, // 1458221990
		{ &Z_Construct_UFunction_UOnlineNewsData_GetBodyText, "GetBodyText" }, // 1290370487
		{ &Z_Construct_UFunction_UOnlineNewsData_GetDisplayPriority, "GetDisplayPriority" }, // 2467366160
		{ &Z_Construct_UFunction_UOnlineNewsData_GetHeaderText, "GetHeaderText" }, // 1960362143
		{ &Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsID, "GetOnlineNewsID" }, // 2821401935
		{ &Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsTexture, "GetOnlineNewsTexture" }, // 83030586
		{ &Z_Construct_UFunction_UOnlineNewsData_GetOnlineNewsVersion, "GetOnlineNewsVersion" }, // 2101277234
		{ &Z_Construct_UFunction_UOnlineNewsData_GetPublicationEndDate, "GetPublicationEndDate" }, // 3709548880
		{ &Z_Construct_UFunction_UOnlineNewsData_GetPublicationStartDate, "GetPublicationStartDate" }, // 3226375192
		{ &Z_Construct_UFunction_UOnlineNewsData_LoadFile, "LoadFile" }, // 3960531425
		{ &Z_Construct_UFunction_UOnlineNewsData_SaveFile, "SaveFile" }, // 4161735120
		{ &Z_Construct_UFunction_UOnlineNewsData_SetEndTime, "SetEndTime" }, // 1777936190
		{ &Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsID, "SetOnlineNewsID" }, // 865611877
		{ &Z_Construct_UFunction_UOnlineNewsData_SetOnlineNewsTexture, "SetOnlineNewsTexture" }, // 2127038930
		{ &Z_Construct_UFunction_UOnlineNewsData_SetStartTime, "SetStartTime" }, // 805759045
		{ &Z_Construct_UFunction_UOnlineNewsData_ToJson, "ToJson" }, // 242810989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineNewsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsID = { "OnlineNewsID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, OnlineNewsID), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsTex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsTex = { "OnlineNewsTex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, OnlineNewsTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, StartTime), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, EndTime), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, Version), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_DisplayPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_DisplayPriority = { "DisplayPriority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, DisplayPriority), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_DisplayPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_DisplayPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, HeaderText), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_BodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineNewsData" },
		{ "ModuleRelativePath", "Public/OnlineNewsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineNewsData, BodyText), METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_BodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_BodyText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineNewsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_OnlineNewsTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_DisplayPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineNewsData_Statics::NewProp_BodyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineNewsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineNewsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineNewsData_Statics::ClassParams = {
		&UOnlineNewsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineNewsData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineNewsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineNewsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineNewsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineNewsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineNewsData, 1707718701);
	template<> ABP_200508_API UClass* StaticClass<UOnlineNewsData>()
	{
		return UOnlineNewsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineNewsData(Z_Construct_UClass_UOnlineNewsData, &UOnlineNewsData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UOnlineNewsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineNewsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
