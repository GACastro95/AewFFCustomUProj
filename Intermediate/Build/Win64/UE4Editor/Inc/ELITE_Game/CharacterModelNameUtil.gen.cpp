// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CharacterModelNameUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterModelNameUtil() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UCharacterModelNameUtil_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UCharacterModelNameUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMeshParam();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterModelNameUtil::execGetData)
	{
		P_GET_STRUCT_REF(FCharacterModelName,Z_Param_Out_ModelName);
		P_GET_UBOOL_REF(Z_Param_Out_bFind);
		P_GET_STRUCT_REF(FELWrestlerMeshParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterModelNameUtil::GetData(Z_Param_Out_ModelName,Z_Param_Out_bFind,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterModelNameUtil::execIsValid)
	{
		P_GET_STRUCT_REF(FCharacterModelName,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCharacterModelNameUtil::IsValid(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	void UCharacterModelNameUtil::StaticRegisterNativesUCharacterModelNameUtil()
	{
		UClass* Class = UCharacterModelNameUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &UCharacterModelNameUtil::execGetData },
			{ "IsValid", &UCharacterModelNameUtil::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics
	{
		struct CharacterModelNameUtil_eventGetData_Parms
		{
			FCharacterModelName ModelName;
			bool bFind;
			FELWrestlerMeshParam Param;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModelName;
		static void NewProp_bFind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFind;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_ModelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterModelNameUtil_eventGetData_Parms, ModelName), Z_Construct_UScriptStruct_FCharacterModelName, METADATA_PARAMS(Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_ModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_ModelName_MetaData)) };
	void Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_bFind_SetBit(void* Obj)
	{
		((CharacterModelNameUtil_eventGetData_Parms*)Obj)->bFind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_bFind = { "bFind", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterModelNameUtil_eventGetData_Parms), &Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_bFind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterModelNameUtil_eventGetData_Parms, Param), Z_Construct_UScriptStruct_FELWrestlerMeshParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_ModelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_bFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterModelNameUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterModelNameUtil, nullptr, "GetData", nullptr, nullptr, sizeof(CharacterModelNameUtil_eventGetData_Parms), Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterModelNameUtil_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterModelNameUtil_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics
	{
		struct CharacterModelNameUtil_eventIsValid_Parms
		{
			FCharacterModelName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterModelNameUtil_eventIsValid_Parms, Name), Z_Construct_UScriptStruct_FCharacterModelName, METADATA_PARAMS(Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterModelNameUtil_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterModelNameUtil_eventIsValid_Parms), &Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterModelNameUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterModelNameUtil, nullptr, "IsValid", nullptr, nullptr, sizeof(CharacterModelNameUtil_eventIsValid_Parms), Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterModelNameUtil_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterModelNameUtil_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterModelNameUtil_NoRegister()
	{
		return UCharacterModelNameUtil::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterModelNameUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterModelNameUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterModelNameUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterModelNameUtil_GetData, "GetData" }, // 1182777697
		{ &Z_Construct_UFunction_UCharacterModelNameUtil_IsValid, "IsValid" }, // 1076470689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterModelNameUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterModelNameUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterModelNameUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterModelNameUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterModelNameUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterModelNameUtil_Statics::ClassParams = {
		&UCharacterModelNameUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterModelNameUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterModelNameUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterModelNameUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterModelNameUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterModelNameUtil, 3774199227);
	template<> ELITE_GAME_API UClass* StaticClass<UCharacterModelNameUtil>()
	{
		return UCharacterModelNameUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterModelNameUtil(Z_Construct_UClass_UCharacterModelNameUtil, &UCharacterModelNameUtil::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UCharacterModelNameUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterModelNameUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
