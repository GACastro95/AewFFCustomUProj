// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAM_AnimDistanceTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAM_AnimDistanceTest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AYCAM_AnimDistanceTest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AYCAM_AnimDistanceTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
// End Cross Module References
	DEFINE_FUNCTION(AYCAM_AnimDistanceTest::execGetStrikeAnimAtkTime)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_In_AnimNotify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStrikeAnimAtkTime(Z_Param_Out_In_AnimNotify);
		P_NATIVE_END;
	}
	void AYCAM_AnimDistanceTest::StaticRegisterNativesAYCAM_AnimDistanceTest()
	{
		UClass* Class = AYCAM_AnimDistanceTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStrikeAnimAtkTime", &AYCAM_AnimDistanceTest::execGetStrikeAnimAtkTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics
	{
		struct YCAM_AnimDistanceTest_eventGetStrikeAnimAtkTime_Parms
		{
			FAnimNotifyEvent In_AnimNotify;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_AnimNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In_AnimNotify;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_In_AnimNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_In_AnimNotify = { "In_AnimNotify", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AnimDistanceTest_eventGetStrikeAnimAtkTime_Parms, In_AnimNotify), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_In_AnimNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_In_AnimNotify_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AnimDistanceTest_eventGetStrikeAnimAtkTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_In_AnimNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AnimDistanceTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AnimDistanceTest, nullptr, "GetStrikeAnimAtkTime", nullptr, nullptr, sizeof(YCAM_AnimDistanceTest_eventGetStrikeAnimAtkTime_Parms), Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AYCAM_AnimDistanceTest_NoRegister()
	{
		return AYCAM_AnimDistanceTest::StaticClass();
	}
	struct Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AYCAM_AnimDistanceTest_GetStrikeAnimAtkTime, "GetStrikeAnimAtkTime" }, // 1460464905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAM_AnimDistanceTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAM_AnimDistanceTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYCAM_AnimDistanceTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::ClassParams = {
		&AYCAM_AnimDistanceTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYCAM_AnimDistanceTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYCAM_AnimDistanceTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYCAM_AnimDistanceTest, 3068317740);
	template<> ABP_200508_API UClass* StaticClass<AYCAM_AnimDistanceTest>()
	{
		return AYCAM_AnimDistanceTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYCAM_AnimDistanceTest(Z_Construct_UClass_AYCAM_AnimDistanceTest, &AYCAM_AnimDistanceTest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AYCAM_AnimDistanceTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYCAM_AnimDistanceTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
