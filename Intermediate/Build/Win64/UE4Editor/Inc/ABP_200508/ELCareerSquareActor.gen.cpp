// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSquareActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSquareActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSquareActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSquareActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSquareData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnFinishedWithAction__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerSquareActor::execBroadcastActionFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastActionFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareActor::execGetHeliport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHeliport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareActor::execGetSquareData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerSquareData*)Z_Param__Result=P_THIS->GetSquareData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareActor::execSetSquareData)
	{
		P_GET_STRUCT(FCareerSquareData,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSquareData(Z_Param__Param);
		P_NATIVE_END;
	}
	void AELCareerSquareActor::StaticRegisterNativesAELCareerSquareActor()
	{
		UClass* Class = AELCareerSquareActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastActionFinished", &AELCareerSquareActor::execBroadcastActionFinished },
			{ "GetHeliport", &AELCareerSquareActor::execGetHeliport },
			{ "GetSquareData", &AELCareerSquareActor::execGetSquareData },
			{ "SetSquareData", &AELCareerSquareActor::execSetSquareData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareActor, nullptr, "BroadcastActionFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics
	{
		struct ELCareerSquareActor_eventGetHeliport_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareActor_eventGetHeliport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareActor, nullptr, "GetHeliport", nullptr, nullptr, sizeof(ELCareerSquareActor_eventGetHeliport_Parms), Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareActor_GetHeliport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareActor_GetHeliport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics
	{
		struct ELCareerSquareActor_eventGetSquareData_Parms
		{
			FCareerSquareData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareActor_eventGetSquareData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerSquareData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareActor, nullptr, "GetSquareData", nullptr, nullptr, sizeof(ELCareerSquareActor_eventGetSquareData_Parms), Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareActor_GetSquareData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareActor_GetSquareData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics
	{
		struct ELCareerSquareActor_eventSetSquareData_Parms
		{
			FCareerSquareData _Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareActor_eventSetSquareData_Parms, _Param), Z_Construct_UScriptStruct_FCareerSquareData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::NewProp__Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareActor, nullptr, "SetSquareData", nullptr, nullptr, sizeof(ELCareerSquareActor_eventSetSquareData_Parms), Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareActor_SetSquareData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareActor_SetSquareData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSquareActor_NoRegister()
	{
		return AELCareerSquareActor::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSquareActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedWithAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedWithAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquareID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SquareID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSquareActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSquareActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSquareActor_BroadcastActionFinished, "BroadcastActionFinished" }, // 2791752319
		{ &Z_Construct_UFunction_AELCareerSquareActor_GetHeliport, "GetHeliport" }, // 3664181467
		{ &Z_Construct_UFunction_AELCareerSquareActor_GetSquareData, "GetSquareData" }, // 2196413427
		{ &Z_Construct_UFunction_AELCareerSquareActor_SetSquareData, "SetSquareData" }, // 29976855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSquareActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_OnFinishedWithAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSquareActor" },
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_OnFinishedWithAction = { "OnFinishedWithAction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSquareActor, OnFinishedWithAction), Z_Construct_UDelegateFunction_ABP_200508_OnFinishedWithAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_OnFinishedWithAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_OnFinishedWithAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_SquareID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSquareActor" },
		{ "ModuleRelativePath", "Public/ELCareerSquareActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_SquareID = { "SquareID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSquareActor, SquareID), METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_SquareID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_SquareID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerSquareActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_OnFinishedWithAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareActor_Statics::NewProp_SquareID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSquareActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSquareActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSquareActor_Statics::ClassParams = {
		&AELCareerSquareActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerSquareActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSquareActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSquareActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSquareActor, 16945034);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSquareActor>()
	{
		return AELCareerSquareActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSquareActor(Z_Construct_UClass_AELCareerSquareActor, &AELCareerSquareActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSquareActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSquareActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
