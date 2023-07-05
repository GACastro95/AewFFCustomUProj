// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/FL_CAWTempFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_CAWTempFunctionLibrary() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UFL_CAWTempFunctionLibrary_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UFL_CAWTempFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCAWTempParam();
// End Cross Module References
	DEFINE_FUNCTION(UFL_CAWTempFunctionLibrary::execConvertToTempData)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__InWrestlerDataObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__PresetIndex);
		P_GET_STRUCT_REF(FCAWTempParam,Z_Param_Out__OutTempParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_CAWTempFunctionLibrary::ConvertToTempData(Z_Param__InWrestlerDataObject,Z_Param__PresetIndex,Z_Param_Out__OutTempParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_CAWTempFunctionLibrary::execConvertToWrestlerDataObject)
	{
		P_GET_STRUCT_REF(FCAWTempParam,Z_Param_Out__InTempParam);
		P_GET_UBOOL(Z_Param__UpdateProfile);
		P_GET_PROPERTY(FIntProperty,Z_Param__PresetIndex);
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__OutWrestlerDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_CAWTempFunctionLibrary::ConvertToWrestlerDataObject(Z_Param_Out__InTempParam,Z_Param__UpdateProfile,Z_Param__PresetIndex,Z_Param__OutWrestlerDataObject);
		P_NATIVE_END;
	}
	void UFL_CAWTempFunctionLibrary::StaticRegisterNativesUFL_CAWTempFunctionLibrary()
	{
		UClass* Class = UFL_CAWTempFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToTempData", &UFL_CAWTempFunctionLibrary::execConvertToTempData },
			{ "ConvertToWrestlerDataObject", &UFL_CAWTempFunctionLibrary::execConvertToWrestlerDataObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics
	{
		struct FL_CAWTempFunctionLibrary_eventConvertToTempData_Parms
		{
			const UMyWrestlerDataObject* _InWrestlerDataObject;
			int32 _PresetIndex;
			FCAWTempParam _OutTempParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__InWrestlerDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__InWrestlerDataObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__PresetIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutTempParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__InWrestlerDataObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__InWrestlerDataObject = { "_InWrestlerDataObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToTempData_Parms, _InWrestlerDataObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__InWrestlerDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__InWrestlerDataObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__PresetIndex = { "_PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToTempData_Parms, _PresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__OutTempParam = { "_OutTempParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToTempData_Parms, _OutTempParam), Z_Construct_UScriptStruct_FCAWTempParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__InWrestlerDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::NewProp__OutTempParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_CAWTempFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_CAWTempFunctionLibrary, nullptr, "ConvertToTempData", nullptr, nullptr, sizeof(FL_CAWTempFunctionLibrary_eventConvertToTempData_Parms), Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics
	{
		struct FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms
		{
			FCAWTempParam _InTempParam;
			bool _UpdateProfile;
			int32 _PresetIndex;
			UMyWrestlerDataObject* _OutWrestlerDataObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__InTempParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__InTempParam;
		static void NewProp__UpdateProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__UpdateProfile;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__PresetIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__OutWrestlerDataObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__InTempParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__InTempParam = { "_InTempParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms, _InTempParam), Z_Construct_UScriptStruct_FCAWTempParam, METADATA_PARAMS(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__InTempParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__InTempParam_MetaData)) };
	void Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__UpdateProfile_SetBit(void* Obj)
	{
		((FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms*)Obj)->_UpdateProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__UpdateProfile = { "_UpdateProfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms), &Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__UpdateProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__PresetIndex = { "_PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms, _PresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__OutWrestlerDataObject = { "_OutWrestlerDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms, _OutWrestlerDataObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__InTempParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__UpdateProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::NewProp__OutWrestlerDataObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_CAWTempFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_CAWTempFunctionLibrary, nullptr, "ConvertToWrestlerDataObject", nullptr, nullptr, sizeof(FL_CAWTempFunctionLibrary_eventConvertToWrestlerDataObject_Parms), Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_CAWTempFunctionLibrary_NoRegister()
	{
		return UFL_CAWTempFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToTempData, "ConvertToTempData" }, // 902222151
		{ &Z_Construct_UFunction_UFL_CAWTempFunctionLibrary_ConvertToWrestlerDataObject, "ConvertToWrestlerDataObject" }, // 2708565503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_CAWTempFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_CAWTempFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_CAWTempFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::ClassParams = {
		&UFL_CAWTempFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_CAWTempFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_CAWTempFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_CAWTempFunctionLibrary, 57014295);
	template<> ELITE_API UClass* StaticClass<UFL_CAWTempFunctionLibrary>()
	{
		return UFL_CAWTempFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_CAWTempFunctionLibrary(Z_Construct_UClass_UFL_CAWTempFunctionLibrary, &UFL_CAWTempFunctionLibrary::StaticClass, TEXT("/Script/ELITE"), TEXT("UFL_CAWTempFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_CAWTempFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
