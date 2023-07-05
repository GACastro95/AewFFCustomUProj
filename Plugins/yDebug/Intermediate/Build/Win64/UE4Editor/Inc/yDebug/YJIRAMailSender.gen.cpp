// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YJIRAMailSender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYJIRAMailSender() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYJIRAMailSender_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYJIRAMailSender();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYJIRAMailData();
// End Cross Module References
	DEFINE_FUNCTION(UYJIRAMailSender::execCreateYJIRAMailSender)
	{
		P_GET_OBJECT_REF(UYJIRAMailSender,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYJIRAMailSender::CreateYJIRAMailSender(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAMailSender::execSend)
	{
		P_GET_STRUCT_REF(FYJIRAMailData,Z_Param_Out__stMailData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send(Z_Param_Out__stMailData);
		P_NATIVE_END;
	}
	void UYJIRAMailSender::StaticRegisterNativesUYJIRAMailSender()
	{
		UClass* Class = UYJIRAMailSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYJIRAMailSender", &UYJIRAMailSender::execCreateYJIRAMailSender },
			{ "Send", &UYJIRAMailSender::execSend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics
	{
		struct YJIRAMailSender_eventCreateYJIRAMailSender_Parms
		{
			UYJIRAMailSender* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAMailSender_eventCreateYJIRAMailSender_Parms, _pcInst), Z_Construct_UClass_UYJIRAMailSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAMailSender_eventCreateYJIRAMailSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAMailSender_eventCreateYJIRAMailSender_Parms), &Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAMailSender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAMailSender, nullptr, "CreateYJIRAMailSender", nullptr, nullptr, sizeof(YJIRAMailSender_eventCreateYJIRAMailSender_Parms), Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAMailSender_Send_Statics
	{
		struct YJIRAMailSender_eventSend_Parms
		{
			FYJIRAMailData _stMailData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stMailData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stMailData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp__stMailData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp__stMailData = { "_stMailData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAMailSender_eventSend_Parms, _stMailData), Z_Construct_UScriptStruct_FYJIRAMailData, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp__stMailData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp__stMailData_MetaData)) };
	void Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAMailSender_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAMailSender_eventSend_Parms), &Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp__stMailData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAMailSender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAMailSender, nullptr, "Send", nullptr, nullptr, sizeof(YJIRAMailSender_eventSend_Parms), Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAMailSender_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAMailSender_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYJIRAMailSender_NoRegister()
	{
		return UYJIRAMailSender::StaticClass();
	}
	struct Z_Construct_UClass_UYJIRAMailSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYJIRAMailSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYJIRAMailSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYJIRAMailSender_CreateYJIRAMailSender, "CreateYJIRAMailSender" }, // 1176192004
		{ &Z_Construct_UFunction_UYJIRAMailSender_Send, "Send" }, // 506609493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYJIRAMailSender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YJIRAMailSender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YJIRAMailSender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYJIRAMailSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYJIRAMailSender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYJIRAMailSender_Statics::ClassParams = {
		&UYJIRAMailSender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYJIRAMailSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYJIRAMailSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYJIRAMailSender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYJIRAMailSender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYJIRAMailSender, 2106689840);
	template<> YDEBUG_API UClass* StaticClass<UYJIRAMailSender>()
	{
		return UYJIRAMailSender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYJIRAMailSender(Z_Construct_UClass_UYJIRAMailSender, &UYJIRAMailSender::StaticClass, TEXT("/Script/yDebug"), TEXT("UYJIRAMailSender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYJIRAMailSender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
