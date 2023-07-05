// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FL_EditItemUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_EditItemUtility() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFL_EditItemUtility_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFL_EditItemUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaint();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditParts();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFaceType();
// End Cross Module References
	DEFINE_FUNCTION(UFL_EditItemUtility::execCheckEditPaintConditions)
	{
		P_GET_STRUCT_REF(FEditPaint,Z_Param_Out_EditPaint);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFL_EditItemUtility::CheckEditPaintConditions(Z_Param_Out_EditPaint,EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditItemUtility::execCheckEditPartsConditions)
	{
		P_GET_STRUCT_REF(FEditParts,Z_Param_Out_EditParts);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_ENUM(EFaceType,Z_Param_FaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFL_EditItemUtility::CheckEditPartsConditions(Z_Param_Out_EditParts,EGender(Z_Param_Gender),EFaceType(Z_Param_FaceType));
		P_NATIVE_END;
	}
	void UFL_EditItemUtility::StaticRegisterNativesUFL_EditItemUtility()
	{
		UClass* Class = UFL_EditItemUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckEditPaintConditions", &UFL_EditItemUtility::execCheckEditPaintConditions },
			{ "CheckEditPartsConditions", &UFL_EditItemUtility::execCheckEditPartsConditions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics
	{
		struct FL_EditItemUtility_eventCheckEditPaintConditions_Parms
		{
			FEditPaint EditPaint;
			EGender Gender;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPaint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_EditPaint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_EditPaint = { "EditPaint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtility_eventCheckEditPaintConditions_Parms, EditPaint), Z_Construct_UScriptStruct_FEditPaint, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_EditPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_EditPaint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtility_eventCheckEditPaintConditions_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender_MetaData)) };
	void Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FL_EditItemUtility_eventCheckEditPaintConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_EditItemUtility_eventCheckEditPaintConditions_Parms), &Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_EditPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditItemUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditItemUtility, nullptr, "CheckEditPaintConditions", nullptr, nullptr, sizeof(FL_EditItemUtility_eventCheckEditPaintConditions_Parms), Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics
	{
		struct FL_EditItemUtility_eventCheckEditPartsConditions_Parms
		{
			FEditParts EditParts;
			EGender Gender;
			EFaceType FaceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditParts;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_EditParts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_EditParts = { "EditParts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtility_eventCheckEditPartsConditions_Parms, EditParts), Z_Construct_UScriptStruct_FEditParts, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_EditParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_EditParts_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtility_eventCheckEditPartsConditions_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType = { "FaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtility_eventCheckEditPartsConditions_Parms, FaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType_MetaData)) };
	void Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FL_EditItemUtility_eventCheckEditPartsConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_EditItemUtility_eventCheckEditPartsConditions_Parms), &Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_EditParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_FaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditItemUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditItemUtility, nullptr, "CheckEditPartsConditions", nullptr, nullptr, sizeof(FL_EditItemUtility_eventCheckEditPartsConditions_Parms), Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_EditItemUtility_NoRegister()
	{
		return UFL_EditItemUtility::StaticClass();
	}
	struct Z_Construct_UClass_UFL_EditItemUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_EditItemUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_EditItemUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPaintConditions, "CheckEditPaintConditions" }, // 2679626389
		{ &Z_Construct_UFunction_UFL_EditItemUtility_CheckEditPartsConditions, "CheckEditPartsConditions" }, // 1777765699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_EditItemUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_EditItemUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_EditItemUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_EditItemUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_EditItemUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_EditItemUtility_Statics::ClassParams = {
		&UFL_EditItemUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_EditItemUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_EditItemUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_EditItemUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_EditItemUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_EditItemUtility, 1565305715);
	template<> CREATION_API UClass* StaticClass<UFL_EditItemUtility>()
	{
		return UFL_EditItemUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_EditItemUtility(Z_Construct_UClass_UFL_EditItemUtility, &UFL_EditItemUtility::StaticClass, TEXT("/Script/Creation"), TEXT("UFL_EditItemUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_EditItemUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
